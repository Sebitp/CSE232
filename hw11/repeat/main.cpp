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
int main(){
    cout << Repeat(45) << '\n' << Repeat('c') << '\n' << Repeat("word");
}