//
// Created by Daniel Castro on 9/14/19.
//

#include <iostream>
#include "delay_control.h"

delay_control::delay_control(core *c1, core *c2, core *c3, core *c4, queue_control *my_queue) {
    core_1 = c1;
    core_2 = c2;
    core_3 = c3;
    core_4 = c4;
    queues = my_queue;
}

void delay_control::read_delay_queue() {
    while (!queues->core_delay_is_empty()) { //Cambiar por if si se ocupa solo un step
        core_delay coreDelay = queues->core_delay_read();
        if (coreDelay.core_to_delay == 1) {
            core_1->update_delay(coreDelay.delay);
        } else if (coreDelay.core_to_delay == 2) {
            core_2->update_delay(coreDelay.delay);
        } else if (coreDelay.core_to_delay == 3) {
            core_3->update_delay(coreDelay.delay);
        } else if (coreDelay.core_to_delay == 4) {
            core_4->update_delay(coreDelay.delay);
        } else {
            std::cout << "ERROR en delay_control::read_delay_queue" << std::endl;
        }
    }

}
