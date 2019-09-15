//
// Created by Daniel Castro on 8/27/19.
//

#ifndef CACHE_COHERENCE_QUEUE_CONTROL_H
#define CACHE_COHERENCE_QUEUE_CONTROL_H

#include <queue>
#include "memory.h"

class queue_control{
private:
    std::queue<request> memory_request_queue;
    std::queue<request> cache_request_queue;
    std::queue<to_cache_request> to_cache_queue;
    std::queue<to_cache_request> write_cache_queue;
    std::queue<status_update> status_update_queue;
    std::queue<core_delay> core_delay_queue;

public:
    explicit queue_control ();

    void push_request_cache(request rqst);

    void push_request_memory(request rqst);

    void push_to_cache(to_cache_request rqst);

    void push_to_write_cache(to_cache_request rqst);

    to_cache_request to_cache_read();

    request cache_request_read();

    request memory_request_read();

    to_cache_request write_cache_read();

    bool to_cache_is_empty();

    bool cache_request_is_empty();

    bool memory_request_is_empty();

    bool write_cache_is_empty();

    void push_to_status_update(status_update rqst);

    status_update status_update_read();

    bool status_update_is_empty();

    int memory_request_size();

    void push_core_delay(core_delay rqst);

    core_delay core_delay_read();

    bool core_delay_is_empty();
};

#endif //CACHE_COHERENCE_QUEUE_CONTROL_H
