//
// Created by Daniel Castro on 9/11/19.
//

#include <iostream>
#include "cache_control.h"

cache_control::cache_control(cache *c1, cache *c2, cache *c3, cache *c4, class queue_control *my_queues) {
    cache_1 = c1;
    cache_2 = c2;
    cache_3 = c3;
    cache_4 = c4;
    queues = my_queues;

}
void cache_control::read_to_cache_request(){ // LLAMADA EN HILO

    while (!queues->to_cache_is_empty()) {
        to_cache_request request = queues->to_cache_read();
        if (request.cache == 1) {
            cache_1->load_block(request.pos, request.status, request.data);
            //Cambia el estado de espera del procesador
            cache_1->set_waiting(false);
        } else if (request.cache == 2) {
            cache_2->load_block(request.pos, request.status, request.data);
            //Cambia el estado de espera del procesador
            cache_2->set_waiting(false);
        } else if (request.cache == 3) {
            cache_3->load_block(request.pos, request.status, request.data);
            //Cambia el estado de espera del procesador
            cache_3->set_waiting(false);
        } else if (request.cache == 4) {
            cache_4->load_block(request.pos, request.status, request.data);
            //Cambia el estado de espera del procesador
            cache_4->set_waiting(false);
        } else {
            std::cout << "ERROR en cache_control::read_to_cache_request" << std::endl;
        }
    }
};

void cache_control::read_cache_request(){ // LLAMADA EN HILO

    while (!queues->cache_request_is_empty()) {
        request request = queues->cache_request_read();
        int tag_searched = request.pos;
        int pos_searched = tag_searched % 8;
        bool unfinished = true;

        //Chequeo por si algun error
        if (request.type != 0) {
            std::cout << "ERROR en cache_control::read_cache_request" << std::endl;
        }

        if (request.id != 1) {
            if (cache_1->get_tag(pos_searched) == tag_searched and cache_1->get_status(pos_searched) != 0) {
               if(cache_1->get_status(pos_searched)==1){

                   //Se crea la petición para el writeback
                   struct request request_write_back{};
                   request_write_back.id=1;
                   request_write_back.pos=cache_1->get_tag(pos_searched);
                   request_write_back.status=1;
                   request_write_back.data=cache_1->get_data(pos_searched);
                   request_write_back.type= 1; // Tipo = Write

                   //Se Hace WriteBack
                   queues->push_request_memory(request_write_back);

                   //Se crea la peticion para el cambio de status (Se pone todos en Shared)
                   struct status_update statusUpdate={};
                   statusUpdate.pos = cache_1->get_tag(pos_searched);
                   statusUpdate.requester_id=1;
                   statusUpdate.new_status=2;

                   //Se cambian estados a SHARED
                   queues->push_to_status_update(statusUpdate);

               }
                // El dato si se encuentra en la cache y No esta invalido
                //Envia el dato inmediatamente a cache
                load_to_cache(request.id, tag_searched, cache_1->get_data(pos_searched), 2);
                unfinished = false;
                //Cambia el estado de espera del procesador
                cache_1->set_waiting(false);

            }
        }
        if (unfinished and request.id != 2) {
            if (cache_2->get_tag(pos_searched) == tag_searched and cache_2->get_status(pos_searched) != 0) {
                if(cache_2->get_status(pos_searched)==1){

                    //Se crea la petición para el writeback
                    struct request request_write_back{};
                    request_write_back.id=2;
                    request_write_back.pos=cache_2->get_tag(pos_searched);
                    request_write_back.status=1;
                    request_write_back.data=cache_2->get_data(pos_searched);
                    request_write_back.type= 1; // Tipo = Write

                    //Se Hace WriteBack
                    queues->push_request_memory(request_write_back);

                    //Se crea la peticion para el cambio de status
                    struct status_update statusUpdate={};
                    statusUpdate.pos = cache_2->get_tag(pos_searched);
                    statusUpdate.requester_id=2;
                    statusUpdate.new_status=2;

                    //Se cambian estados a SHARED
                    queues->push_to_status_update(statusUpdate);

                }
                // El dato si se encuentra en la cache y No esta invalido
                //Envia el dato inmediatamente a cache
                load_to_cache(request.id, tag_searched, cache_2->get_data(pos_searched), 2);
                unfinished = false;
                //Cambia el estado de espera del procesador
                cache_2->set_waiting(false);
            }
        }
        if (unfinished and request.id != 3) {
            if (cache_3->get_tag(pos_searched) == tag_searched and cache_3->get_status(pos_searched) != 0) {
                if(cache_3->get_status(pos_searched)==1){

                    //Se crea la petición para el writeback
                    struct request request_write_back{};
                    request_write_back.id=3;
                    request_write_back.pos=cache_3->get_tag(pos_searched);
                    request_write_back.status=1;
                    request_write_back.data=cache_3->get_data(pos_searched);
                    request_write_back.type= 1; // Tipo = Write

                    //Se Hace WriteBack
                    queues->push_request_memory(request_write_back);

                    //Se crea la peticion para el cambio de status
                    struct status_update statusUpdate={};
                    statusUpdate.pos = cache_3->get_tag(pos_searched);
                    statusUpdate.requester_id=3;
                    statusUpdate.new_status=2;

                    //Se cambian estados a SHARED
                    queues->push_to_status_update(statusUpdate);

                }
                // El dato si se encuentra en la cache y No esta invalido
                //Envia el dato inmediatamente a cache
                load_to_cache(request.id, tag_searched, cache_3->get_data(pos_searched), 2);
                unfinished = false;
                //Cambia el estado de espera del procesador
                cache_3->set_waiting(false);
            }
        }
        if (unfinished and request.id != 4) {
            if (cache_4->get_tag(pos_searched) == tag_searched and cache_4->get_status(pos_searched) != 0) {
                if(cache_4->get_status(pos_searched)==1){

                    //Se crea la petición para el writeback
                    struct request request_write_back{};
                    request_write_back.id=4;
                    request_write_back.pos=cache_4->get_tag(pos_searched);
                    request_write_back.status=1;
                    request_write_back.data=cache_4->get_data(pos_searched);
                    request_write_back.type= 1; // Tipo = Write

                    //Se Hace WriteBack
                    queues->push_request_memory(request_write_back);

                    //Se crea la peticion para el cambio de status
                    struct status_update statusUpdate={};
                    statusUpdate.pos = cache_4->get_tag(pos_searched);
                    statusUpdate.requester_id=4;
                    statusUpdate.new_status=2;

                    //Se cambian estados a SHARED
                    queues->push_to_status_update(statusUpdate);

                }
                // El dato si se encuentra en la cache y No esta invalido
                //Envia el dato inmediatamente a cache
                load_to_cache(request.id, tag_searched, cache_4->get_data(pos_searched), 2);
                unfinished = false;
                //Cambia el estado de espera del procesador
                cache_3->set_waiting(false);
            }
        }
        if (unfinished) {
            //Dato NO esta en ninguna cache
            //Se manda el request al bus
            queues->push_request_memory(request);
            //std::cout << "ERROR en cache_control::read_cache_request" << std::endl;
        }
    }
}

//FUNCION SIN USO
void cache_control::read_write_cache() { // LLAMADA EN HILO
//    if(!queues->write_cache_is_empty()){
//        to_cache_request rqst = queues->write_cache_read();
//        write_to_cache(rqst.cache,rqst.pos ,rqst.data, rqst.status);
//    }
}

void cache_control::load_to_cache(int id, int tag, int data, int status){
    if (id == 1){
        cache_1->load_block(tag,status,data);
    }else if (id == 2){
        cache_2->load_block(tag,status,data);
    }else if (id == 3){
        cache_3->load_block(tag,status,data);
    }else if (id == 4){
        cache_4->load_block(tag,status,data);
    }else {
        std::cout << "ERROR en cache_control::load_to_cache" << std::endl;
    }

}

//Funcion SIN USO
void cache_control::write_to_cache(int id, int tag, int data, int status){
    if (id == 1){
        cache_1->write_cache(tag,status,data);
    }else if (id == 2){
        cache_2->write_cache(tag,status,data);
    }else if (id == 3){
        cache_3->write_cache(tag,status,data);
    }else if (id == 4){
        cache_4->write_cache(tag,status,data);
    }else {
        std::cout << "ERROR en cache_control::write_to_cache" << std::endl;
    }

}