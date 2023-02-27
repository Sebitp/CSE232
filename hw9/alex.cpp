#include <string>
#include <iostream>
int main() {
  std::string const testimony = "fuck";


  std::string const & new_name = testimony;

  
  std::string const * const wow = &testimony;
  
  
  std::string const * ok = &testimony;
  
  // new_name = "retard";
  // *wow = "retard";
  // *ok = "retard";
  return 0;
}