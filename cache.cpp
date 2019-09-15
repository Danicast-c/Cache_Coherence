//
// Created by Daniel Castro on 8/26/19.
//

#include <iostream>
#include "cache.h"
#include "colors.h"

cache::cache(int new_id, class queue_control *new_queues) {
    id=new_id;
    queues = new_queues;

}


void cache::set_modified(int direction){
    if (cache_block[direction%8].tag==direction){
        cache_block[direction%8].status=1;
    } else{
        std::cout << "ERROR en cache::set_modified" << std::endl;
    }
}
void cache::set_invalid(int direction){
    if (cache_block[direction%8].tag==direction){
        cache_block[direction%8].status=0;
    }
}
void cache::set_shared(int direction){
    if (cache_block[direction%8].tag==direction){
        cache_block[direction%8].status=2;
    }
}

//Funciones de Read y Write
void cache::read_mem(int direction){
    int finish = 0;
    int pos = direction % 8;
    // Busca la posición donde debería estar
    if (direction == cache_block[pos].tag){
        //Si se encuentra el dato
        if (cache_block[pos].status != 0){
            //HIT: Su estado es M o S, el dato se puede leer
            //Retorna el dato
            finish = 1; //termina la función
            //console->write_core(cache::id,"CACHE READ HIT: Position = "+std::to_string(pos));_______*******
            std::cout<<"In cache: #"+std::to_string(id)+ "  CACHE READ HIT: Position = "+std::to_string(pos)<<std::endl;
        }
    }
    if (finish == 0){
        //MISS: ya que no se encuentra el dato
        waiting=true; // Pone la cache en espera mientras espera el dato
        //console->write_core(cache::id,"CACHE READ MISS: Tag = "+std::to_string(direction));_______*******
        std::cout<<"In cache: #"+std::to_string(id)+ "  CACHE READ MISS: Tag = "+std::to_string(direction)<<std::endl;

        //Crea solicitud para enviar
        request rqst{};
        rqst.id = cache::id;
        rqst.pos = pos;
        rqst.status = 2;
        rqst.data = cache_block[pos].data;

        //Guarda el bloque actual en memoria si status = M (1)
        if (cache_block[pos].status==1){
            //Solicitud de tipo write
            rqst.type = 1;
            //Mete la solucitud directo a memoria
            queues->push_request_memory(rqst);
            //
        };

        //Solicitud de tipo read
        rqst.type = 0;
        //Mete la solicitud en el queue_control;
        queues->push_request_cache(rqst);
        //pone al procesador en espera
        waiting=true;
    }
}
void cache::write_mem(int tag, int data) {


    int finish = 0;
    int pos = tag%8;
    // Busca la posición donde debería estar
    if (tag == cache_block[pos].tag){
        //Si se encuentra el dato
        if (cache_block[pos].status != 1) { //Si es I o S debe invalidar

            //invalida
             status_update statusUpdate={};
            statusUpdate.pos = tag;
            statusUpdate.requester_id=id;
            statusUpdate.new_status=0;

            //Se cambian estados a invalid
            queues->push_to_status_update(statusUpdate);

        }
        //HIT: El dato se puede escribir
        //Se escribe el dato
        write_cache(tag,1,data);
        finish = 1; //termina la función
        //Retorna el dato
        //console->write_core(cache::id,"CACHE WRITE HIT: Position = "+std::to_string(pos));_______*******
        std::cout<<"In cache: #"+std::to_string(id)+ "  CACHE WRITE HIT: Position = "+std::to_string(pos)<<std::endl;
    } if (finish == 0){
        //Existe un write miss
        //console->write_core(cache::id,"CACHE WRITE MISS: Position = "+std::to_string(pos));_______*******
        std::cout<<"In cache: #"+std::to_string(id)+ "  CACHE WRITE MISS: Position = "+std::to_string(pos)<<std::endl;
        //Si el dato esta en M se debe hacer WriteBack
        if (cache_block[pos].status==1){

            //WriteBack
            struct request request_write_back{};
            request_write_back.id=id;
            request_write_back.pos=cache_block[pos].tag;
            request_write_back.status=1;
            request_write_back.data=cache_block[pos].data;
            request_write_back.type= 1; // Tipo = Write

            //Se Hace WriteBack
            queues->push_request_memory(request_write_back);

        }
        //Se sobre escribe el dato
        overwrite_cache(tag,1,data);
        //Se invalida los demas
        status_update statusUpdate={};
        statusUpdate.pos = tag;
        statusUpdate.requester_id=id;
        statusUpdate.new_status=0;
        //Se cambian estados a invalid
        queues->push_to_status_update(statusUpdate);

    }
}


//Funciones del flag Waiting
bool cache::get_waiting(){
    return waiting;
}
void cache::set_waiting(bool state){
    waiting = state;
}



//Funciones de escritura inmediata y carga de bloque a cache
void cache::to_cache(int direction, int value) {
    cache_block[direction].data = value;
}
void cache::write_cache(int tag, int status, int data){
    int pos = tag%8;

    if (tag == cache_block[pos].tag){
        cache_block[pos].data = data;
        cache_block[pos].status = 1;
    }else{
        std::cout << "ERROR en cache::write_cache" << std::endl;
    }
}
void cache::overwrite_cache(int tag, int status, int data){
    int pos = tag%8;
    cache_block[pos].data = data;
    cache_block[pos].status = 1;
    cache_block[pos].tag = tag;
}
void cache::load_block(int pos, int status, int data){
    //inserta el bloque en la posicion correspondiente
    cache_block[pos%8].tag = pos;
    cache_block[pos%8].data = data;
    cache_block[pos%8].status = 2; //

    //Envia Notificacion del load
}


//Muestra cache en interfaz
void cache::print_cache(){

    file.open("cache_"+std::to_string(id)+"_file.txt");
    file.clear();
    for(auto i : cache_block){
        file << std::to_string(i.data) +"\n";
    }
    for(auto i : cache_block){
        file << std::to_string(i.tag) +"\n";
    }
    for(auto i : cache_block){
        file << std::to_string(i.status) +"\n";
    }
    file.close();


}


//Getters de los datos de la cache
int cache::get_data(int pos){
    return cache_block[pos].data;
}
int cache::get_tag(int pos){
    return cache_block[pos].tag;
}
int cache::get_status(int pos){
    return cache_block[pos].status;
}