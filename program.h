//
// Created by Daniel Castro on 9/8/19.
//

#ifndef CACHE_COHERENCE_PROGRAM_H
#define CACHE_COHERENCE_PROGRAM_H

class program{
private:
    int process_percentage= 20;
    int writes_percentage=40;
    int reads_percentage=40;

public:
    int get_instruction();
    int get_direction();
};

#endif //CACHE_COHERENCE_PROGRAM_H
