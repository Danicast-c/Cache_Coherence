//
// Created by Daniel Castro on 2019-08-21.
//

#include <iostream>
#include "memory.h"
#include "colors.h"

memory::memory(){
}

void memory::write_mem(int direction, int value){
    memory_block[direction].data=value;
}
int memory::read_mem(int direction){
    return memory_block[direction].data;
}
void memory::print_mem(){
    file.open("memory_file.txt");
    file.clear();
    for(auto i : memory_block){
        //console->write_memory(pos, i.data, 2);
        file << std::to_string(i.data) +"\n";
    }
    file.close();
}
