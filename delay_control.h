//
// Created by Daniel Castro on 9/14/19.
//

#ifndef CACHE_COHERENCE_DELAY_CONTROL_H
#define CACHE_COHERENCE_DELAY_CONTROL_H

#include "core.h"

class delay_control{
private:
    core* core_1;
    core* core_2;
    core* core_3;
    core* core_4;
    queue_control* queues;
public:
    delay_control(core *c1, core *c2,core *c3,core *c4, queue_control *my_queue);
    void read_delay_queue();
};
#endif //CACHE_COHERENCE_DELAY_CONTROL_H
