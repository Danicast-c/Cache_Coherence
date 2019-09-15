//
// Created by Daniel Castro on 9/13/19.
//

#include <iostream>
#include "bus.h"

bus::bus(class memory *mm, queue_control *my_queues) {
    memory = mm;
    queues = my_queues;

}

void bus::read_memory_request(){ // LLAMADA EN HILO
    if (!queues->memory_request_is_empty()) {
        request request = queues->memory_request_read();

        //Crea el delay en el core respectivo
        int size = queues->memory_request_size();
        int delay;
        if (size < 4) {delay = 5;
        }else{
            delay=size+1;
        }
        //Inserta a cola de delays
        core_delay delay_request={};
        delay_request.core_to_delay=request.id;
        delay_request.delay=delay;


        if (request.type == 0) { // Es un READ
            //prepara el request para meterlo en la cola de to_cache
            to_cache_request rqst{};
            rqst.cache = request.id;
            rqst.pos = request.pos;
            rqst.data = memory->read_mem(request.pos);
            rqst.status = 2;
            //inserta el request en la cola de to_cache
            queues->push_to_cache(rqst);
        } else if (request.type == 1) { // Es un WRITE
            memory->write_mem(request.pos, request.data);
        } else {
            std::cout << "bus::read_memory_request()" << std::endl;
        }
    }
}

