//
// Created by Daniel Castro on 9/14/19.
//

#include <iostream>
#include "status_control.h"

status_control::status_control(cache *c1, cache *c2, cache *c3, cache *c4, queue_control *my_queue) {
    cache_1 = c1;
    cache_2 = c2;
    cache_3 = c3;
    cache_4 = c4;
    queues = my_queue;
}

void status_control::write_back_request(int id, int tag, int status, int data){
    //Se hace peticion de wb
    struct request request_write_back{};
    request_write_back.id=id;
    request_write_back.pos=tag;
    request_write_back.status=1;
    request_write_back.data=data;
    request_write_back.type= 1; // Tipo = Write

    //Se Hace WriteBack
    queues->push_request_memory(request_write_back);
}

void status_control::status_update_read(){// Se ejecula en hilo
    while (!queues->status_update_is_empty()) {
        status_update update = queues->status_update_read();
        if(update.new_status==0) { // Pasar todos a I menos la posicion
            //Invalida los datos de la cache menos el que esta modificado
            if(update.requester_id==1){

                //hace writeback si existe alguna posicion en M
                if ( cache_2->get_tag(update.pos%8)==update.pos and cache_2->get_status(update.pos%8)==1){
                    write_back_request(2, update.pos ,1, cache_2->get_data(update.pos%8));

                } else if ( cache_3->get_tag(update.pos%8)==update.pos and cache_3->get_status(update.pos%8)==1){
                    write_back_request(3, update.pos ,1, cache_3->get_data(update.pos%8));

                } else if ( cache_4->get_tag(update.pos%8)==update.pos and cache_4->get_status(update.pos%8)==1){
                    write_back_request(4, update.pos ,1, cache_4->get_data(update.pos%8));
                }

                cache_2->set_invalid(update.pos);
                cache_3->set_invalid(update.pos);
                cache_4->set_invalid(update.pos);

            }else if(update.requester_id==2){

                if ( cache_1->get_tag(update.pos%8)==update.pos and cache_1->get_status(update.pos%8)==1){
                    write_back_request(1, update.pos ,1, cache_1->get_data(update.pos%8));

                } else if ( cache_3->get_tag(update.pos%8)==update.pos and cache_3->get_status(update.pos%8)==1){
                    write_back_request(3, update.pos ,1, cache_3->get_data(update.pos%8));

                } else if ( cache_4->get_tag(update.pos%8)==update.pos and cache_4->get_status(update.pos%8)==1) {
                    write_back_request(4, update.pos, 1, cache_4->get_data(update.pos % 8));

                }
                cache_1->set_invalid(update.pos);
                cache_3->set_invalid(update.pos);
                cache_4->set_invalid(update.pos);

            }else if(update.requester_id==3){

                if ( cache_1->get_tag(update.pos%8)==update.pos and cache_1->get_status(update.pos%8)==1){
                    write_back_request(1, update.pos ,1, cache_1->get_data(update.pos%8));

                } else if ( cache_2->get_tag(update.pos%8)==update.pos and cache_2->get_status(update.pos%8)==1){
                    write_back_request(2, update.pos ,1, cache_2->get_data(update.pos%8));

                } else if ( cache_4->get_tag(update.pos%8)==update.pos and cache_4->get_status(update.pos%8)==1) {
                    write_back_request(4, update.pos, 1, cache_4->get_data(update.pos % 8));


                }
                cache_1->set_invalid(update.pos);
                cache_2->set_invalid(update.pos);
                cache_4->set_invalid(update.pos);
            }else if(update.requester_id==4){

                if ( cache_1->get_tag(update.pos%8)==update.pos and cache_1->get_status(update.pos%8)==1){
                    write_back_request(1, update.pos ,1, cache_1->get_data(update.pos%8));

                } else if ( cache_2->get_tag(update.pos%8)==update.pos and cache_2->get_status(update.pos%8)==1){
                    write_back_request(2, update.pos ,1, cache_2->get_data(update.pos%8));

                } else if ( cache_3->get_tag(update.pos%8)==update.pos and cache_3->get_status(update.pos%8)==1) {
                    write_back_request(3, update.pos, 1, cache_3->get_data(update.pos % 8));
                }
                cache_1->set_invalid(update.pos);
                cache_2->set_invalid(update.pos);
                cache_3->set_invalid(update.pos);
            }else{
                std::cout << "ERROR en cache_control::read_cache_request" << std::endl;
            }

        } else if (update.new_status==1){ //Pasar posicion a M

            if(update.requester_id==1){
                cache_1->set_modified(update.pos);
            }else if(update.requester_id==2){
                cache_2->set_modified(update.pos);
            }else if(update.requester_id==3){
                cache_3->set_modified(update.pos);
            }else if(update.requester_id==4){
                cache_4->set_modified(update.pos);
            }else{
                std::cout << "ERROR en cache_control::read_cache_request" << std::endl;
            }

        } else if (update.new_status==2){ //Pasar todos a S
            cache_1->set_shared(update.pos);
            cache_2->set_shared(update.pos);
            cache_3->set_shared(update.pos);
            cache_3->set_shared(update.pos);
        } else {
            std::cout << "ERROR en cache_control::read_cache_request" << std::endl;
        }
    }
}