



#pragma once 
#include <iostream>
#include <ctime>




namespace my_random{
    int min_range = 0;
    int max_range = 100;
    void set_range(int min_range, int max_range){
        my_random::min_range = min_range;
        my_random::max_range = max_range;
    }
    void srand(unsigned int option = ((time(NULL)) % 1000)){
        std::srand(option); 
    }
    int random(){
        // max_range  + 1 - ограничение по максимуму
        // + min_range - ограничение по миниму (двигает границу максимума в лево)
        // max_range - min_range + 1 - ограничение по максимуму + учет сдига из-за границы минимума
        return ((rand() % (max_range - min_range + 1)) + min_range); 
    }
}