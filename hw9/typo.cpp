#include <string>
using std::string;
#include <iostream>
using std::cout; using std::cin; using std::endl;
#include <algorithm> 
string revmid(string str)
{   
    string temp;
    if (str.length() == 1){
        return str;
    }
    for (string::size_type i = 1; i < str.size()-1; i ++)
    {
        temp.insert(temp.begin(),str[i]);
    }
    temp.insert(temp.begin(),str[0]);
    temp += str.back();
    return temp;
}

int main(){
    string temp;
    string str;
    int counter = 0;
    while (cin >> str){
        if (counter == 10){
            cout << endl;
            counter = 0;
        }
        cout << revmid(str);
        counter++;
        if (counter < 10){
          cout << ' ';
        }
    }
    cout << endl;


}