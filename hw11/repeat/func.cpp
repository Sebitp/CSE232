#include <iostream>
#include "header.hpp"
using std::cout;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;
using std::setw;
#include <vector>
using std::vector;
#include <string>
using std::string;
using std::to_string;

int Repeat(int num){
  return num * 2;
}

string Repeat(char chr){
  string str {chr,chr};
  return str;
}

string Repeat(string str){
  return str + ' ' + str;
}