#include<iostream>
#include<string>
using std::cin; using std::cout; using std::endl;
using std::string;
#include<algorithm>

int main (){
    string str;
string temp = "";
int count = 1;
int i = 0;
    cin >> str;
    while (count != 0){
        sort(str.begin(),str.end());
        if ( i == str.length() - 1){
            if (str[i] == str [i-1]){
                break;
            } else{
                temp += str[i] +1;
                break;
            }
        }
        if (str[i] == str [i+1]){
            temp += str[i] +1;
            count ++;
        } else {
            temp += str[i];
        }
        i++;
        str = temp;
        temp = "";
    }
    cout << str << endl;
}
