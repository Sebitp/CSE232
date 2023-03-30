#include <algorithm>  // Remove me
#include <iostream>
#include <iterator>
#include <numeric>  // Remove me
#include <sstream>
#include <string>
#include <vector>
int Func(int a) {
  int x = 12;
  std::vector<int> b(a);
  for (auto &elem : b) {
    elem += x;
    x++;
  }

  //std::copy(b.begin(),b.end(), std::ostream_iterator<int>(std::cout, ", "));
  std::vector<int> c(b), temp;
  for (auto iter = c.rbegin(); iter != c.rend(); ++iter) {
    temp.push_back(*iter);
  }
  c = temp;
  temp.clear();
  //std::cout << std::endl;
  //std::copy(c.begin(),c.end(), std::ostream_iterator<int>(std::cout, ", "));
  //std::cout << std::endl;
  for (size_t i = 0; i < b.size(); i++) {
    b[i] = b[i] * 2 + c[i];
  }

  //std::copy(b.begin(),b.end(), std::ostream_iterator<int>(std::cout, ", "));
  int count = 0;
  for (auto i = b.begin() + 2; i != b.end() - 2; i++) {
    if (std::to_string(*i).find("2") != std::string::npos) {
      count++;
    }
  }
  return count;
}
int main() { 
  std::cout << Func(23);
  const int x = 123;
  const int * const y = &x;
  std::cout << *y;
  }