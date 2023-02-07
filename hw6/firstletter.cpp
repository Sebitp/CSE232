#include<iostream>
using std::cin; using std::cout; using std::endl;
#include<string>
using std::string;
#include<iomanip>
using std::noskipws;
#include<cctype>
using std::isalpha;
int main(){
  char c1;
    string s;
  cin >> noskipws >> c1;
  cout << c1;
  while (cin >> noskipws >> c1){
    s = isalpha(c1);
    if(c1 == '.'){
      break;
    }
    if(isalpha(c1) < 1){
      while (isalpha(c1) < 1){

        cin >> noskipws >> c1;
      }

      cout << c1;


    } else {
        continue;
    }

  }
}