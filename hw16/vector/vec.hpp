#include <vector>
#include <algorithm>
using std::transform;
#include <iostream>
#include <iterator>
#include <string>
using std::string;
#include <sstream>
#include <vector>
using std::vector;
#include <functional>
using std::greater;
template <typename t>
vector<t> MaxVector(vector<t> v1, vector<t> v2){
    if (v1.empty()) {
        return v2;
    }

    if (v2.empty()) {
        return v1;
    }


    vector<t> result;
    if (v1.size() > v2.size()){
        size_t diff = v1.size()-v2.size();
        transform(v2.begin(),v2.end(),v1.begin(),back_inserter(result), 
        [] (const t & a, const t & b) {
            return greater<t> {}(a,b)? a:b;
            });
        vector<t> vectors=result;        
        vector<t> new_vec (v1.end()-diff, v1.end() +0);
        result.insert(result.end(),new_vec.begin(),new_vec.end());
        return result;
        
    } else if(v1.size() < v2.size()){
        size_t diff = v2.size()-v1.size();
        transform(v1.begin(),v1.end(),v2.begin(),back_inserter(result), 
        [] (const t & a, const t & b) {
            return greater<t> {}(a,b)? a:b;
            });
        vector<t> vectors=result;
        vector<t> new_vec (v2.end()-diff, v2.end());
        result.insert(result.end(),new_vec.begin(),new_vec.end() +0);
        return result;
    }
    transform(v1.begin(),v1.end(),v2.begin(),back_inserter(result), 
        [] (const t & a, const t & b) {
        return greater<t> {}(a,b)? a:b;
        });
    return result;

    
}