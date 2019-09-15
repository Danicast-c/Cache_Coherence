//
// Created by Daniel Castro on 8/27/19.
//

#include "queue_control.h"

queue_control::queue_control() = default;

// PUSH de las colas
void queue_control::push_request_cache(request rqst){
    cache_request_queue.push(rqst);
}
void queue_control::push_request_memory(request rqst){
    memory_request_queue.push(rqst);
}
void queue_control::push_to_cache(to_cache_request rqst){
    to_cache_queue.push(rqst);
}
void queue_control::push_to_write_cache(to_cache_request rqst){
    write_cache_queue.push(rqst);
}
void queue_control::push_to_status_update(status_update rqst){
    status_update_queue.push(rqst);
}
void queue_control::push_core_delay(core_delay rqst){
    core_delay_queue.push(rqst);
}


//READ elemento de las colas
to_cache_request queue_control::to_cache_read(){
    to_cache_request rqst = to_cache_queue.front();
    //elimina el dato de la cola
    to_cache_queue.pop();
    return rqst;
}
request queue_control::cache_request_read(){
    request rqst = cache_request_queue.front();
    //elimina el dato de la cola
    cache_request_queue.pop();
    return rqst;
}
request queue_control::memory_request_read(){
    request rqst =  memory_request_queue.front();
    //elimina el dato de la cola
    memory_request_queue.pop();
    return rqst;
}
to_cache_request queue_control::write_cache_read(){
    to_cache_request rqst =  write_cache_queue.front();
    //elimina el dato de la cola
    write_cache_queue.pop();
    return rqst;
}
status_update queue_control::status_update_read(){
    status_update rqst =  status_update_queue.front();
    //elimina el dato de la cola
    status_update_queue.pop();
    return rqst;
}
core_delay queue_control::core_delay_read(){
    core_delay rqst =  core_delay_queue.front();
    //elimina el dato de la cola
    core_delay_queue.pop();
    return rqst;
}

//Booleano que indica si la cola esta vacia
bool queue_control::to_cache_is_empty(){
    return to_cache_queue.empty();
}
bool queue_control::cache_request_is_empty(){
    return cache_request_queue.empty();
}
bool queue_control::memory_request_is_empty(){
    return memory_request_queue.empty();
}
bool queue_control::write_cache_is_empty(){
    return write_cache_queue.empty();
}
bool queue_control::status_update_is_empty(){
    return status_update_queue.empty();
}
bool queue_control::core_delay_is_empty(){
    return core_delay_queue.empty();
}

//Funcion que indica tamaño de la cola del bus
int queue_control::memory_request_size(){
    return memory_request_queue.size();
}