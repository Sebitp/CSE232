#include <iostream>
using std::string;
using std::cout;
double IsSecurePassword(string s){
    s;
}

bool TestResult(double result, double expected) {
  if (result != expected) {


    return false;
  }

  return true;
}
int main() {
  if (TestResult(IsSecurePassword("abCD12!@hhh"),6) &&
  TestResult(IsSecurePassword("abCD12!@ggg"),6) && 
  TestResult(IsSecurePassword("abCD12!@~~"),6) &&
  TestResult(IsSecurePassword("abCD12!@GG"),6) &&
  TestResult(IsSecurePassword("abCD12!@"),5) &&
  TestResult(IsSecurePassword("abCD12~~gg"),4)
  ){
    cout << "Pass";

  } else cout << "Fail";
  // Place your testcode here!

}
