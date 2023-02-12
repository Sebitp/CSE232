#include<iostream>
#include<string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
  string str = "";
  string temp;
  while (getline(cin,temp)){

    str += temp;
  }

  int orig_count = 0;
  int counter;
  int len = str.length();
  for (int i = 0; i < len; i++)
  {
    counter = 1;
    for (int j = i + 1; j < len; j++)
    {
      if (str[i] != str[j])
      {
        if (i == 0){
          cout << "\'" << str[i] << "\'" <<
          " is the first to length "<< counter << endl;
        }
        break;
      }
      counter++;
      if (counter > orig_count)
      {
        orig_count = counter;
        cout << "\'" << str[i] << "\'" << " is the first to length " 
        << orig_count << endl;
      }
    }

  }
}