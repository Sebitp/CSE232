#include <string>
#include <vector>
#include <cassert>
#include<iostream>
#include<sstream>
#include<iterator>
#include<algorithm>

#include "counter.hpp"

int main() {
	std::vector<std::string> names = {"A Game of Thrones", "A Clash of Kings", 
		"A Storm of Swords", "A Feast for Crows", "A Dance with Dragons", 
		"The Winds of Winter", "A Dream of Spring"};
	std::vector<int> exception_count = CountExceptions(names);
	std::vector<int> expected = {1, 0, 2};
    std::ostream_iterator<int> out (std::cout, ",");
    copy(exception_count.begin(), exception_count.end(), out);


	return 0;
}