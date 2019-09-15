//
// Created by Daniel Castro on 9/13/19.
//

#ifndef CACHE_COHERENCE_BUS_H
#define CACHE_COHERENCE_BUS_H

#include "memory.h"
#include "queue_control.h"

class bus {
private:
    memory *memory;
    queue_control *queues;

public:
    bus(class memory *mm, queue_control *my_queues);

    void read_memory_request();
};

#endif //CACHE_COHERENCE_BUS_H
