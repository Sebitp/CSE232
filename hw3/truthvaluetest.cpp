#include<iostream>
#include<string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main(){
    double um,joon,sick;
    if (0)
        cout << "0true" <<endl;
    if (false)
        cout << "false true" <<endl;
    if (-1)
        cout << "-1 true" <<endl;
    if ('\0')
        cout << "\'\0\' with fucking backslashes is true" <<endl;
    if ("\0")
        cout << "\"0\" with fucking backslashes is true" <<endl;        
    if ('0')
        cout << "\'0\' true" <<endl;
    if ("0")
        cout << "\"0\" true" <<endl;


    std::cout << "first line" << std::endl
          << "second line" << std::endl;
    ((std::cout << "first line") << std::endl) << "second line" << std::endl;
    std::cout << "first line" << std::endl << "second line" << std::endl;
    cin >> um;
    cin >> joon;
    cin >> sick;
    cout << um << joon << sick << endl;
}   