#include "penultimate.hpp"
string Penultimate::push_back(string str){
    string temp = elem;
    elem = str;
    return temp;
}
Penultimate::Penultimate(string str){
    elem = str;
}