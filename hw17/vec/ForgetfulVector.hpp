#include<vector>
#include<string>
#include<set>
using std::set;
using std::vector;


struct ForgetfulVector{
    vector<int> vec;
    set<int> forgot;

    void push_back(int);
    size_t size();
    int at(size_t);

};