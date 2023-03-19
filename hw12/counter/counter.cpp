// WRITE YOUR CODE HERE
#include <vector>
using std::vector;
#include <string>
#include <stdexcept>
#include "name_checker.hpp"
std::vector<int> CountExceptions(std::vector<std::string> const & input){
  vector<int> result (3,0);
 
for (const auto & elem : input){
    try {
        CheckName(elem);
    
    
    } catch (std::invalid_argument& e){
        result[0] += 1;
    } catch (std::length_error& e){
        result[1] += 1;
    } catch (std::out_of_range& e){
        result[2] += 1;
    }
}
  return result;
}