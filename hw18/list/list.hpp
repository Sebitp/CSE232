#include <string>
#include <vector>
using std::vector;

struct PythonicIntVector{
    vector<int> vec;
    void push_back(int);

    int& at(int);
};