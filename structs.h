//
// Created by Daniel Castro on 9/12/19.
//

#ifndef CACHE_COHERENCE_STRUCTS_H
#define CACHE_COHERENCE_STRUCTS_H
struct cache_struct{
    int tag = -1;
    int data = -1;
    int status = -1;
};
struct memory_position{
    //int status = 2;
    int data = 9;
};
struct request{
    int id;
    int type;
    int pos;
    int status;
    int data;
};
struct to_cache_request{
    int cache;
    int pos;
    int status;
    int data;
};
//struct to_cache_request{
//    int cache;
//    int type;
//    int tag;
//};

struct status_update{
    int new_status;
    int requester_id;
    int pos;
};

struct core_delay{
    int core_to_delay;
    int delay;
};

#endif //CACHE_COHERENCE_STRUCTS_H
