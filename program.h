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
    int choosed_dist;
    float parameter;


public:
    program (int dist_choose, float choosen_parameter);
    int get_instruction();
    int get_direction();

    int get_instruction_2();
};

#endif //CACHE_COHERENCE_PROGRAM_H
