//
// Created by Daniel Castro on 8/26/19.
//

#ifndef CACHE_COHERENCE_CACHE_H
#define CACHE_COHERENCE_CACHE_H

#include "queue_control.h"
//#include "mainwindow.h"
#include "structs.h"

class cache {
    private:
        int id;
        queue_control* queues;
        bool waiting = false;
        //int cache_block[8] = {0};
        //int tag_block[8] = {-1};
        std::ofstream file;
        std::ofstream file2;

        cache_struct cache_block[8];

    public:
        cache(int new_id, class queue_control *new_queues);
        void read_mem(int direction);
        void print_cache();

        void to_cache(int direction, int value);

    void load_block(int pos, int status, int data);

    void set_modified(int direction);

    int get_data(int pos);

    int get_tag(int pos);

    int get_status(int pos);

    bool get_waiting();

    void set_waiting(bool state);

    void write_cache(int tag, int status, int data);

    void write_mem(int tag, int data);

    void set_invalid(int direction);

    void set_shared(int direction);

    void overwrite_cache(int tag, int status, int data);

    void clean_log();

    void write_log(std::string log);
};

#endif //CACHE_COHERENCE_CACHE_H
