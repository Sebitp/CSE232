#include <iostream>
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
#include <sstream>
using std::ostringstream;
using std::istringstream;

template <typename t>
t Increment(t num){
  t temp = 1;

  return temp + num;
}



template <typename t>
string AddToString(string const &s, t par){
  
  string temp = s + to_string(par);

  return temp;
}


int main(){
    int x = Increment(5);
    x= Increment(3.7);
    x= Increment('5');
    x= Increment(4u);
    x= Increment(-57ll);
    string y = AddToString("abc", 0.5);
    cout << x << y;
}