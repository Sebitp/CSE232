#pragma once
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>
template <typename iterator> 
int SumOfOdd(iterator start,  iterator end){
    return (std::accumulate(start,end,0, [] (auto const &a,auto const &b){
            return b%2 != 0 ? a+b : a;
            })) ;

};
std::string ReturnUpper(std::string word);
std::string DoubleToPercentString(std::vector<double>);
void SortByUppercase(std::vector<std::string> & v);