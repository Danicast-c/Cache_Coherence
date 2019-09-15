//
// Created by Daniel Castro on 9/8/19.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>
#include "program.h"

int program::get_instruction() {
    int instruction;
    std::random_device random_device;
    std::mt19937 random_engine(random_device());
    std::uniform_int_distribution<int> distribution_1_100(0, 100);
    auto const randomNumber = distribution_1_100(random_engine);

//    std::cout << "The random is: " << '\n';
//    std::cout << randomNumber << '\n';

    if (randomNumber < process_percentage) instruction = 0;
    else if (process_percentage <= randomNumber and randomNumber < process_percentage + writes_percentage) instruction = 1;
    else instruction = 2;

    std::cout << "The instruction is: ";
    std::cout << instruction << '\n';
    return instruction;
}

int program::get_direction() {
    std::random_device random_device;
    std::mt19937 random_engine(random_device());
    std::uniform_int_distribution<int> distribution_1_100(0, 15);
    auto const randomNumber = distribution_1_100(random_engine);
    std::cout << "The random is: ";
    std::cout << randomNumber << '\n';
    return randomNumber;

}
