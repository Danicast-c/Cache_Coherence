//
// Created by Daniel Castro on 9/14/19.
//

#ifndef CACHE_COHERENCE_STATUS_CONTROL_H
#define CACHE_COHERENCE_STATUS_CONTROL_H

#include "cache.h"

class status_control{
private:
    cache* cache_1;
    cache* cache_2;
    cache* cache_3;
    cache* cache_4;
    queue_control* queues;
public:
    status_control(cache *c1, cache *c2,cache *c3,cache *c4, queue_control *my_queue);

    void status_update_read();

    void write_back_request(int id, int tag, int status, int data);
};



#endif //CACHE_COHERENCE_STATUS_CONTROL_H
