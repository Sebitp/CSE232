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

vector<string> split(string const &s, char sep=' '){
  vector<string> list;
  istringstream input;
  input.str(s);
  for (string line; getline(input, line, sep);){
    list.push_back(line);
  }
  return list;
}

void print_vector(ostream &out, vector<string> const &v){
  for (auto element : v) {
    out << element << ' ';
  }
}