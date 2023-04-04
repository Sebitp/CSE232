#include <vector>
using std::vector;
#include <map>
using std::map;
#include <fstream>
using std::ifstream;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <algorithm>
using std::transform;
#include <string>
using std::string;
#include <sstream>
using std::istringstream;
#include <stdlib.h>
using std::exit;

ifstream OpenFile(string name) {
  ifstream file(name);
  if (!file.is_open()) { //if opening unsuccessful, terminate
    cout << "Error: Cannot open " << name << '.' << endl;
    exit(1);
  }
  return file;
}

map<char, char> ReadEncoding(string const &line) {
  istringstream iss(line);
  string pair;
  map<char, char> m;
  while (iss >> pair) {
    if (pair == "q") { //conditionals to check valid inputs
      return m;
    }
    if (pair.size() != 2) {
      cout << "Error: Unknown encoding " << pair << '.' << endl;
      exit(1);
    } else if (!(m.insert({pair.at(0), pair.at(1)}).second)) {
      auto it = m.find(pair.at(0)); //check if key already exists
      cout << "Error: The character " << pair.at(0) << " is encoded as both "
           << it->second << " and " << pair.at(1) << '.' << endl;
      exit(1);
    }
  }
  return m;
}

void ApplyEncoding(string& line, map<char, char> const& m) {
  transform(line.begin(), line.end(), line.begin(), [m](const char& c) {
    auto it = m.find(c); //if a matching key found, swap with value
    return (it != m.end()) ? it->second : c;
  });
}

void PrintLine(ifstream& input, map<char, char> const& m) {
  string line;
  vector<string> list;
  while (getline(input, line)) {
    ApplyEncoding(line, m); 
    auto it = find(list.begin(), list.end(), line); //!= list.end() if found
    if (it == list.end()) { //if its not a duplicate, print
      cout << line << endl;
    }
    list.push_back(line); //add to a vector to keep track of dups
  }
}

int main() {
  map<char, char> m;
  string str;
  cin >> str; //file name
  ifstream input(OpenFile(str));
  getline(cin, str); //encoding pairs
  m = ReadEncoding(str);
  PrintLine(input, m);
}
