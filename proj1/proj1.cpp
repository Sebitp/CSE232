#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Build your functions here.
bool AtListPosition(const string &list, const string &word, size_t pos) {
  size_t len = word.size();
  string temp = list.substr(pos, len);

  if (pos + len >= list.size())  // check if its at last letter
  {
    if (list.size() == word.size()) {
      if (list == word) {
        return true;
      } else {
        return false;
      }
    } else if (temp == word &&
               list.at(pos - 1) == ',') {  // if same && comma before
      return true;

    } else
      return false;
  }

  if (pos != 0 && pos <= list.size())  // test case for positions in middle
  {
    // if same && comma before and after target
    if (temp == word && list.at(pos - 1) == ',' && list.at(pos + len) == ',') {
      return true;
    } else {
      return false;
    }
  } else if (temp == word && list.at(pos + len) == ',') {  // test for index 0
    return true;
  } else {
    return false;
  }
}

size_t FindInList(const string &list, const string &word, size_t pos = 0) {
  size_t temp_pos = list.find(word, pos);

  while (true) {
    if (temp_pos == string::npos) {  // if not found
      return string::npos;
    }

    if (AtListPosition(list, word, temp_pos)) {  // check if its a valid
                                                 // position
      return temp_pos;
    }
    temp_pos = list.find(word, temp_pos + 1);
  }
}

string GetFirstInList(const string &list, string *word1_ptr,
                      string *word2_ptr) {
  size_t word1_pos = FindInList(list, *word1_ptr);
  size_t word2_pos = FindInList(list, *word2_ptr);
  if (word1_pos == string::npos && word2_pos != string::npos) {
    // if word1 dont exist
    return *word2_ptr;
  } else if (word2_pos == string::npos && word1_pos != string::npos) {
    // if word2 dont exist
    return *word1_ptr;
  } else if (word2_pos == string::npos && word1_pos == string::npos) {
    // if neither exist
    return "N/A";
  } else if (word1_pos >= word2_pos) {
    return *word2_ptr;
  } else {
    return *word1_ptr;
  }
}

size_t CountInList(const string &list, const string &word) {
  size_t temp = 0;
  size_t counter = 0;

  while (true) {
    temp = FindInList(list, word, temp);
    if (temp == string::npos) {  // breaks when no more found
      break;
    }
    temp++; //start search from the previous loc
    counter++;
  }
  return counter;
}

int main() {
  string list, word, word1, word2, first;
  int w1_count, w2_count;
  cin >> word1 >> word2;
  while (cin >> list) {
    first = GetFirstInList(list, &word1, &word2);
    w1_count = CountInList(list, word1);
    w2_count = CountInList(list, word2);
    cout << first << " " << w1_count << " " << w2_count << endl;
  }
}
