#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
#include<iterator>
#include<numeric>
#include<functional>
using namespace std;
int main() {

  vector<int> v= {1,2,3,4,5,6,7,8,9};
  auto x = partition(v.begin()+2,v.end()-2, [](int x){
   return x %2 == 0;
  });
  copy(v.begin(),v.end(),ostream_iterator<int>(std::cout,", "));
  cout << endl << *x << endl;
  
    std::vector<int> vec1 = {1, 2, 3};
  std::vector<int> vec2 = {1,2,3};
  std::vector<int> result(3);

  std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), 
  [](int a, int b) { 
    return a + b; 
    });

  for (int i : result) {
      std::cout << i << " ";
  }
  std::cout << std::endl;

  std::vector<double> vec(5, 3);

partial_sum(vec.cbegin(), vec.cend(),
  vec.begin(), std::multiplies<double>());

std::copy(vec.cbegin(), vec.cend(), 
  std::ostream_iterator<double>(std::cout, " "));


}