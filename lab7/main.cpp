#include "functions.hpp"

int main(){
  string word;
  char chr;
  cout << "Give me a string to split: " << endl;
  getline(cin,word);
  cout << "What character should I split on: " << endl;
  cin >> chr;
  vector<string> list = split(word,chr);
  print_vector(std::cout,list);
}