#include "header.hpp"
#include <iostream>
#include <iterator>
using std::string;
using std::cout;
using std::endl;
using std::vector;
#include <cmath>
#include <sstream>
#include <cctype>
using std::isupper;
using std::ostringstream;
using std::ostream_iterator;


string ReturnUpper(string word){
    string str ="";
    std::copy_if(word.begin(),word.end(), back_inserter(str), [](const char &c){
        return isupper(c);
    });
    
    return str;
}

void SortByUppercase(vector<string> & v){
    std::stable_sort(v.begin(),v.end(),[](const string &s1, const string &s2){
        return ReturnUpper(s1) < ReturnUpper(s2);
    });
}

string DoubleToPercentString(vector<double> v){
    vector<double> temp;
    ostringstream oss;
    ostream_iterator<double> out(oss, "% ");
    std::transform(v.begin(),v.end(),back_inserter(temp), [](const double & a){
        return std::trunc(a * 100);
    });
    std::copy(temp.begin(),temp.end(), out);
    return oss.str();
}

int main(){
    std::vector<int> const numbers = {1, 2, 3, 4, 5, 6, 8, 5, 2, 2, 5, 101};
    std::cout <<SumOfOdd(numbers.cbegin(), numbers.cend()) << ' ' << SumOfOdd(numbers.begin() + 1, numbers.end() - 1) <<'\n';
    std::vector<double> const doubles = {1, 2, 100, 200, 12.3456, 4787, 0.123};
    cout << DoubleToPercentString(doubles) << endl;
    std::vector<std::string> words = {"wolf", "BanAna", "caRRot", "AprIcots", "BEets", "chiCkPeas", "orAngEs", "apple", "CAT", "dOG"};
    SortByUppercase(words);
    cout << ReturnUpper(words[0]) <<
    ReturnUpper(words[1])<<
    ReturnUpper(words[2])<<
    ReturnUpper(words[3])<< endl;
    for (auto elem:words){
        cout << elem << endl;
    }
}