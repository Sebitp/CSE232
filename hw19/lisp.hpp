#include <string>
using std::string;
#include <iostream>
#include <sstream>
using std::istringstream;
using std::ostringstream;
#include <vector>
using std::vector;
class LispExpression{
    public:
        string str;
        vector<string> v;
        LispExpression(string);
        string PrettyPrint();
};