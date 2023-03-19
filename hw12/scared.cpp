#include <string>
using std::string;
#include <vector>
using std::vector;
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<sstream>
using std::istringstream; using std::ostringstream;
#include<stdexcept>

int SumButScared(const string &str){
    istringstream iss(str);
    int num,temp = 0;

    while(iss >> num){
        if (num%13 == 0){
            throw std::invalid_argument("omy not 13! (；☉_☉)");
        }
        temp += num;
    }

    return temp;
}
int main(){
    string str;

    while(getline(cin,str)){
        cout << SumButScared(str) << endl;
    }
}