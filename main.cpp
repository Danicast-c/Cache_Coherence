#include <iostream>

#include <thread>
#include <fstream>

#include "colors.h"
#include "memory.h"
#include "clock.h"
#include "cache.h"
#include "core.h"
#include "program.h"
#include "cache_control.h"
#include "bus.h"
#include "status_control.h"
#include "delay_control.h"

int clk = 0;

void clock_tick(class clock *clock);
void update_gui(cache *c1, cache *c2, cache *c3, cache *c4,memory *main_memory );
void delay_control_thread(delay_control *delayControl);
void status_control_thread(status_control *statusControl);
void bus_thread(bus *bus);
void cache_control_thread(cache_control *cache_control);
void core_1_thread(core *core_1);
void core_2_thread(core *core_2);
void core_3_thread(core *core_3);
void core_4_thread(core *core_4);

int main(int argc, char *argv[]){
//    QApplication gui(argc, argv);
//    MainWindow console;
//    console.show();

//    std::cout << "\033[1;31m bold red text\033[0m\n"<< std::endl;
//    std::cout << FBLU("I'm blue.")<< std::endl;
//    std::cout << BOLD(FRED("I'm red."))<< std::endl;


//INSTANCIAS DE ARCHIVOS

    std::ofstream file;


//    file.open("cache_caca_file.txt");
//    file.clear();
//    for(int i=0; i<16; ++i){
//        file << std::to_string(i) +"\n";
//    }
//    file.close();




// INSTANCIAS DE CLASES__________________*

    //INSTANCIA CLOCK
    class clock clock;

    //INSTANCIA MEMORIA
    class memory memory;

    //INSTANCIA COLAS
    class queue_control queues;

    //INSTANCIA BUS
    class bus bus(&memory, &queues);

    //INSTANCIA PROGRAMAS

//    this->uniform_dist = std::uniform_int_distribution(0,2);
//    this->poisson_dist = std::poisson_distribution(parameter);
//    this->geometric_dist = std::geometric_distribution(parameter);
//    this->binomial_dist = std::binomial_distribution(2, parameter);
    program program_1;
    program program_2;
    program program_3;
    program program_4;

    //INSTANCIAS CACHES
    cache cache_1 (1, &queues);
    cache cache_2 (2, &queues);
    cache cache_3 (3, &queues);
    cache cache_4 (4, &queues);

    //INSTANCIA CACHE CONTROL
    cache_control cache_control (&cache_1, &cache_2, &cache_3, &cache_4, &queues );

    //INSTANCIA STATUS CONTROL
    class status_control status_control(&cache_1, &cache_2, &cache_3, &cache_4, &queues );

    //INSTANCIAS CORES
    core core_1 (1, &cache_1, &program_1);
    core core_2 (2, &cache_2, &program_2);
    core core_3 (3, &cache_3, &program_3);
    core core_4 (4, &cache_4, &program_4);

    //INSTANCIA DELAY CONTROL
    class delay_control delay_control (&core_1, &core_2, &core_3, &core_4, &queues);


    //DECLARACION DE HILOS

    //update_gui ( &cache_1,&cache_1,&cache_1,&cache_1,&memory);
    std::thread t_update_gui (update_gui, &cache_1,&cache_2,&cache_3,&cache_4,&memory);
//    t_update_gui.detach();

    std::thread t_delay_control (delay_control_thread, &delay_control);
    //t_delay_control.detach();

    std::thread t_status_control (status_control_thread, &status_control);
    //t_status_control.detach();

    std::thread t_bus (bus_thread, &bus);
    //t_bus.detach();

    std::thread t_cache_control (cache_control_thread, &cache_control);
   // t_cache_control.detach();

    std::thread t_core_1 (core_1_thread, &core_1);
    //t_core_1.detach();

    std::thread t_core_2 (core_2_thread, &core_2);
    //t_core_2.detach();

    std::thread t_core_3 (core_3_thread, &core_3);
    //t_core_3.detach();

    std::thread t_core_4 (core_4_thread, &core_4);
   // t_core_4.detach();

    std::thread t_clock_thread (clock_tick, &clock);
    t_clock_thread.join();

    return 0;
}

void clock_tick(class clock *clock){
    while(true){
        clock->tick();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void update_gui(cache *c1, cache *c2, cache *c3, cache *c4,memory *main_memory ){
    while(true) {

        int clock_now = clk;
        if (clock_now != clk){
            main_memory->print_mem();
            c1->print_cache();
            c2->print_cache();
            c3->print_cache();
            c4->print_cache();
            //std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
    }
}
void delay_control_thread(delay_control *delayControl){
    while(true){
        int clock_now = clk;
        if (clock_now != clk){
            delayControl->read_delay_queue();
        }
    }
}
void status_control_thread(status_control *statusControl){
    while(true){
        int clock_now = clk;
        if (clock_now != clk){
            statusControl->status_update_read();
        }
    }
}
void bus_thread(bus *bus){
    while(true){
        int clock_now = clk;
        if (clock_now != clk){
            bus->read_memory_request();
        }
    }
}
void cache_control_thread(cache_control *cache_control){
    while(true){
        int clock_now = clk;
        if (clock_now != clk){
            cache_control->read_cache_request();
            cache_control->read_to_cache_request();
        }
    }
}
void core_1_thread(core *core_1){
    while(true) {
        int clock_now = clk;
        if (clock_now != clk) {
            //core_1->my_cache->print_cache();
            if (core_1->get_delay() == 0) {
                if (!core_1->my_cache->get_waiting()) {
                    core_1->work();
                }
            } else if (core_1->get_delay() != 0) {
                core_1->decrease_delay();
            }
        }
    }
}
void core_2_thread(core *core_2) {
    while (true) {
        int clock_now = clk;
        if (clock_now != clk) {
            if (core_2->get_delay() == 0) {
                if (!core_2->my_cache->get_waiting()) {
                    core_2->work();
                }
            } else if (core_2->get_delay() != 0) {
                core_2->decrease_delay();
            }
        }
    }
}
void core_3_thread(core *core_3) {
    while (true) {
        int clock_now = clk;
        if (clock_now != clk) {
            if (core_3->get_delay() == 0) {
                if (!core_3->my_cache->get_waiting()) {
                    core_3->work();
                }
            } else if (core_3->get_delay() != 0) {
                core_3->decrease_delay();
            }
        }
    }
}
void core_4_thread(core *core_4) {
    while (true) {
        int clock_now = clk;
        if (clock_now != clk) {
            if (core_4->get_delay() == 0) {
                if (!core_4->my_cache->get_waiting()) {
                    core_4->work();
                }
            } else if (core_4->get_delay() != 0) {
                core_4->decrease_delay();
            }
        }
    }
}




