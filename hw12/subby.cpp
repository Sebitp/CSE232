// WRITE YOUR CODE HERE
#include <algorithm>
#include <iterator>
#include <vector>
using std::vector;
vector<int> SumByIndex(std::vector<std::vector<int>> const & v){
  size_t max_size = 0;
  for (const auto &subv : v){
    if (subv.size() > max_size){
        max_size = subv.size();
    }
  }
  vector<int> result (max_size);
  for (const auto & subv : v){
    for (size_t i = 0; i < subv.size(); ++i){
        result[i] += subv[i];
    }
  }
  return result;
}