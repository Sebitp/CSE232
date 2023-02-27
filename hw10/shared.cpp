// WRITE YOUR CODE HERE
#include <string>
using std::string; using std::to_string;
#include <iostream>
using std::cout; using std::cin; using std::endl;

string SharedLetters(string const &word1, string const word2, string const *word3){
  string w1 = word1, w2 = word2, w3 = *word3;
  size_t w1_len = w1.size(), w2_len = w2.size(), w3_len = w3.size();
  size_t max = std::max(w1_len,(std::max(w2_len,w3_len)));
  string temp = "";
  int count;
  for (size_t i = 0; i < max; i++){
    count = 0;
    if (i < w1.size() && i < w2.size() && w1.at(i) == w2.at(i)){
      count ++;
    }
    if (i < w1.size() && i < w3.size() && w1.at(i) == w3.at(i)){
      count ++;
    }
    if (i < w2.size() && i < w3.size() && w2.at(i) == w3.at(i)){
      count ++;
    }
    if (count == 2){
      temp += "1,";
    } else {
      temp += to_string(count)+ ',';
    }
  }
  return temp;
}


int main(){
  string word1,word2,word3;
  while (cin >> word1 >> word2 >> word3){
    cout << SharedLetters(word1,word2,&word3) << endl;
  }
}