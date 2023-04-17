#include "list.hpp"

void PythonicIntVector::push_back(int num){
    vec.push_back(num);
}


int& PythonicIntVector::at(int x){
    if(x < 0){
        x = vec.size() + x;
    }
    return vec.at(x);
}