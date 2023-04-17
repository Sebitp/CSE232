#include "temp.hpp"
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    std::vector<vector<int>> prof_to_salary;
    vector<int> x(5,2);
    prof_to_salary.push_back(x);
    x = vector<int> (1, 0);
   prof_to_salary.push_back(x);
      prof_to_salary.push_back(x);
         prof_to_salary.push_back(x);
            prof_to_salary.push_back(x);
               prof_to_salary.push_back(x);
                  prof_to_salary.push_back(x);
    Temperature t(13, 'C'); // 13.0 degrees C
    cout << t.AsKelvin(); // Should return 286.15 as that is the temp in Kelvin.
    for (auto it = prof_to_salary.begin(); it != prof_to_salary.end(); ++it) {cout << it->size();}


}