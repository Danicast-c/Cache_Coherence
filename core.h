//
// Created by Daniel Castro on 8/27/19.
//

#ifndef CACHE_COHERENCE_CORE_H
#define CACHE_COHERENCE_CORE_H

#include "cache.h"
#include "program.h"

class core{
private:
    int id;

    program* program;
    int delay=0;

public:
    cache* my_cache;
    core(int new_id, cache *my_cache, class program *my_program);

    int get_id();

    void proccess();

    void read(int direction);

    void write(int direction);

    void work();

    void update_delay(int new_delay);

    int get_delay();

    int decrease_delay();
};

#endif //CACHE_COHERENCE_CORE_H
