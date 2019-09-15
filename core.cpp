//
// Created by Daniel Castro on 8/27/19.
//

#include <iostream>
#include "core.h"
#include "colors.h"


core::core(int new_id, cache *my_cache2, class program *my_program) {
    id = new_id;
    my_cache = my_cache2;
    program = my_program;
}

int core::get_id(){
    return id;
}

void core::proccess(){
    update_delay(1);
}
void core::work(){
    int instruction;
    instruction = program->get_instruction_2();
    if (instruction == 0){                      // 0 = proccess
        proccess();
        //console->write_core(id,"Instruction: PROCCESS (1 Cicle)");
    } else if (instruction == 1){               // 1 = read
        int direction = program->get_direction();
        read(direction);
        //console->write_core(id,"Instruction: READ ( On position "+std::to_string(direction) +" )");
    } else{
        int direction = program->get_direction(); // 2 = write
        write(direction);
        //console->write_core(id,"Instruction: WRITE ( On position "+std::to_string(direction) +" )");
    }
}

void core::read(int direction){
    my_cache->read_mem(direction);
    //int data = my_cache->read_mem(direction);
    //std::cout << "LECTURA: Direccion = "+std::to_string(direction)+", Dato obtenido: "+std::to_string(data) << std::endl;
}

void core::write(int direction) {
    my_cache->write_mem(direction,id);
    //my_cache->write_mem(1,get_id());
    //std::cout << "Insertado en memoria" << std::endl;

}

void core::update_delay(int new_delay){
    delay= new_delay;
}
int core::get_delay(){
    return delay;
}
int core::decrease_delay(){
    delay-=1;
}


