#include <string>
using std::string;
#include <vector>
#include<iomanip>
using std::vector;
#include <cassert>
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<sstream>
using std::istringstream; using std::ostringstream;
#include<iterator>
#include<algorithm>


vector<double> ExtractDoubles(const string &str){
    istringstream iss(str);
    double num;
    vector<double> result;
    while (iss >> num){
        result.push_back(num);
    }
    return result;
}
string ReturnPercentFormatted(const vector<double> & v){
    ostringstream oss;
    oss << std::fixed << std::setprecision(3);
    for (const auto & elem: v){
        oss << elem *100 << '%' << ", ";
    }

    return oss.str();
}

int main(){

  string str;
  vector<double> v;
  while(getline(cin,str)){
    v = ExtractDoubles(str);
    cout << ReturnPercentFormatted(v) << endl;
  }
  
}