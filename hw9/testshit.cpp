#include<string>
using std::string;

int main() {
  string testimony = "um";

  string & const fuck = testimony;
    
  string const * const new_name = &testimony;
  
  
  string const * pog = &testimony;
  
  fuck = "nomu";

}