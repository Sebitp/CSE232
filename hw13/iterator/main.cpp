// WRITE YOUR CODE HERE
#include "header.hpp"
#include <cassert>
#include <vector>
#include<iostream>


std::vector<int>::const_iterator FindSmallestIndexRange(const std::vector<int>& vec, int start, int end)
{
    std::vector<int>::const_iterator smallest_iter = vec.begin() + start;
    for(auto iter = vec.begin() + start; iter != vec.begin() + end + 1 && iter != vec.end(); ++iter) {
        if (*iter < *smallest_iter) {
            smallest_iter = iter;
        }
    }
    return smallest_iter;
}


int main(){
    std::vector<int> data1 = {6, 1, 5, 4, 3, 2, -1};
    auto iter_smallest = FindSmallestIndexRange(data1, 0, 5);
    std::cout << *iter_smallest << std::endl;

    std::vector<float> data = {5.6, 2.3, 12, 19};
    DoubleIteratorRange(data.begin(), data.end());
    DoubleIteratorRange(data.rbegin() + 1, data.rend());
    std::string str = "()";
    DoubleIteratorRange(str.begin(), str.end());
    std::vector<float> expected = {11.2, 4.6, 24, 38};
    for (auto elem: data){
        std::cout << elem << std::endl; 
    }
    std::cout << str;
}