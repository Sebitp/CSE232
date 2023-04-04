#include "vec.hpp"
#include <algorithm>
using std::transform;
#include <iostream>
#include <iterator>
#include <string>
using std::string;
#include <sstream>
#include <vector>
using std::vector;
using std::istringstream;
using std::ostringstream;
using std::cout;
using std::endl;

using std::istream;
using std::ostream;
int main(){
  std::vector<double>  a = {2,2,2,2};
  std::vector<double>  b = {1,1,1,1,1,1};
    vector<double> vec = MaxVector(a,b);
    std::copy(vec.cbegin(), vec.cend(), 
  std::ostream_iterator<double>(std::cout, " "));
}
