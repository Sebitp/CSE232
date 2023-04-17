#include "list.hpp"
#include <iostream>
using namespace std;
int main(){
    PythonicIntVector x;
    for (auto i = 0; i<5; ++i){
        x.push_back(i);
    }

    cout << x.at(-1) << endl;
    cout << x.at(-2) << endl; 
    cout << x.at(0);
}