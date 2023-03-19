#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>

// Write your functions here!

void PassOrFail(std::vector<std::pair<std::string, int>> &v) {
  std::sort(v.begin(),v.end(), [] (auto const & p1, auto const & p2){
		return p1.first < p2.first;
	});
  std::stable_partition(v.begin(),v.end(), [] (auto const & n){
		return n.second >= 600;
	});
}



void ShiftRange(std::vector<int> &v, int left, int right) {
  std::sort(v.begin(),v.end());
  // The lines below do nothing, but prevent "unused variable" warnings
  std::stable_partition(v.begin(),v.end(), [left, right] (auto const & n){
		return !(n >= left && n <= right);
	});
}

int FibonacciHelper(int n)
{
    if (n <= 1) {
        return 1;
    }
    return FibonacciHelper(n-1) + FibonacciHelper(n-2);
}

std::vector<int> Fibonacci(int n) {
    std::vector<int> indices(n);
    std::iota(indices.begin(), indices.end(), 0);
    std::vector<int> fib(n);
    std::transform(indices.begin(), indices.end(), fib.begin(), FibonacciHelper);
    return fib;
}


int BinaryToInt(const std::string &binary_str) {
  // The line below does nothing, but prevents an "unused variable" warning
  return std::stoi(binary_str, 0, 2);
}
