//
// Created by Daniel Castro on 9/11/19.
//

#ifndef CACHE_COHERENCE_CACHE_CONTROL_H
#define CACHE_COHERENCE_CACHE_CONTROL_H

#include "cache.h"
#include "memory.h"
#include "queue_control.h"

class cache_control{
private:
    cache* cache_1;
    cache* cache_2;
    cache* cache_3;
    cache* cache_4;
    class queue_control* queues;

public:
    cache_control(cache *c1, cache *c2, cache *c3, cache *c4, class queue_control *my_queues);

    void read_to_cache_request();

    void read_cache_request();

    void load_to_cache(int id, int tag, int data, int status);

    void write_to_cache(int id, int tag, int data, int status);

    void read_write_cache();

    void stop_waiting(int id);
};

#endif //CACHE_COHERENCE_CACHE_CONTROL_H
