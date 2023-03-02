#ifndef DEFAULT_TEST
#define DEFAULT_TEST

#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <sstream>
using std::istringstream;
using std::ostringstream;
using std::ostream;
#include <vector>
using std::vector;

std::vector<string> split(std::string const &s, char sep=' ');
void print_vector(ostream &out, std::vector<string> const &v);
#endif