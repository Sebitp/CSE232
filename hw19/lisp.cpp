#include "lisp.hpp"

LispExpression::LispExpression(string str){
    istringstream iss(str);
    string temp;
    while (iss >> temp){
        v.push_back(temp);
    }
}
string LispExpression::PrettyPrint(){
    int counter = 0;
    string temp;
    for (auto elem:v){
        if (elem == ")"){
            counter -= 1;
        }     
        for (auto i = 0; i < counter; ++i ){
            temp += " ";
        }
        temp += elem + '\n';
        if (elem == "("){
            counter += 1;
        }
        if (counter == 0){
            break;
        }   
    }
    return temp;
}