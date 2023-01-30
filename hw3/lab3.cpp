#include<iostream>
#include<string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main(){
  int input_num;
    while (cin >> input_num){
        int root = 0;
        int count = 0;
        if (input_num < 0)
            break;
        do {
            root += input_num%10;
            input_num /= 10;
            count += 1;
        } while ((input_num / 10) != 0);
        cout << count << " " << root << endl;
    }
}   