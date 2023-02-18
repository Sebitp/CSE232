#include <string>
using std::string;
#include <iostream>
using std::cout; using std::cin; using std::endl;
#include <stdlib.h>   
int main()
{
  string str,temp;
  while (cin >> str)
  {
    temp = "";
    if (abs(str[0]-str[1])<= 1){
        temp += str[0];
    }
    for (string::size_type i = 1; i < str.size()-1; i ++)
    {
        if (abs(str[i]-str[i-1])<= 1 || abs(str[i]-str[i+1])<= 1)
        {
            temp += str[i];
        }
        if (i == str.size()-2 && abs(str.back()-str[i])<= 1)
        {
            temp += str.back();
        }
    }
    cout << temp << endl; 

  }
}