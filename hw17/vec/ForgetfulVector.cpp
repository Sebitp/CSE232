#include "ForgetfulVector.hpp"
#include <algorithm>
void ForgetfulVector::push_back(int num){
    if(forgot.count(num) == 1){
        vec.push_back(num);
    }
    forgot.insert(num);
    
}

size_t ForgetfulVector::size(){
    return vec.size();
}

int ForgetfulVector::at(size_t x){
    return vec.at(x);
}