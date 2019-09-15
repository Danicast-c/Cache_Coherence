//
// Created by Daniel Castro on 2019-08-21.
//

#ifndef CACHE_COHERENCE_MEMORY_H
#define CACHE_COHERENCE_MEMORY_H

#include <fstream>
//#include "mainwindow.h"
#include "structs.h"

class memory {
    private:
        memory_position memory_block[16];
        std::ofstream file;
    public:

        memory();


        void print_mem();


    void write_mem(int direction, int value);

    int read_mem(int direction);
};

#endif //CACHE_COHERENCE_MEMORY_H
