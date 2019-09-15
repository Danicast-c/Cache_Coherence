//
// Created by Daniel Castro on 9/8/19.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>
#include "program.h"

program::program(int dist_choose, float choosed_parameter) {
    choosed_dist=dist_choose;
    parameter=choosed_parameter;

}

int program::get_instruction() {
    int instruction;
    std::random_device random_device;
    std::mt19937 random_engine(random_device());
    std::uniform_int_distribution<int> distribution_1_100(0, 100);
    auto const randomNumber = distribution_1_100(random_engine);

    if (randomNumber < process_percentage) instruction = 0;
    else if (process_percentage <= randomNumber and randomNumber < process_percentage + writes_percentage) instruction = 1;
    else instruction = 2;
    return instruction;
}

int program::get_direction() {
    std::random_device random_device;
    std::mt19937 random_engine(random_device());
    std::uniform_int_distribution<int> distribution_1_100(0, 15);
    auto const randomNumber = distribution_1_100(random_engine);

    return randomNumber;

}
int program::get_instruction_2() {
    int instruction;
    std::random_device random_device;
    std::mt19937 random_engine(random_device());
    auto randomNumber=0;
    if (choosed_dist == 0){
        std::uniform_int_distribution selected_dist(0, 2);
        randomNumber = selected_dist(random_engine);

    } else if(choosed_dist == 1){
        std::poisson_distribution selected_dist(parameter);
        randomNumber = selected_dist(random_engine);

    } else if (choosed_dist == 2){
        std::geometric_distribution selected_dist(parameter);
        randomNumber = selected_dist(random_engine);

    } else{
        std::binomial_distribution selected_dist(2,parameter);
        randomNumber = selected_dist(random_engine);

    }
    if (randomNumber%3 == 0){
        instruction = 0;

    } else if (randomNumber%3 == 1){
        instruction = 1;
    } else {
        instruction = 2;
    }
    return instruction;
}