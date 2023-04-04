#include "cen.hpp"

#include <iostream>
#include <iterator>
#include <string>
using std::string;
#include <sstream>
using std::cout;
using std::endl;
using std::istream;
using std::istringstream;
using std::map;
using std::ostream;
using std::ostringstream;
using std::set;

set<string> ReplacementCensor(istream& iss, ostream& oss,
                              map<string, string>& m) {
  string str, l_temp, o_temp, l_map, line;
  set<string> replaced;
  ostringstream osstream;
  while (getline(iss, line)) {  // str = "rePLACEd."
    istringstream isstream(line);
    while (isstream >> str) {
      l_temp = "", o_temp = "";
      for (char c : str) {
        l_temp += tolower(c);  // replaced
      }
      for (auto itr = m.begin(); itr != m.end(); ++itr) {
        l_map = "";
        for (char c : itr->first) {
          l_map += tolower(c);
        }
        auto pos = l_temp.find((l_map));    // if success, pos = 2 l_temp[2]="p"
        while (pos != std::string::npos) {  // if it finds
          o_temp = str.substr(pos, size(itr->first));
          replaced.insert(o_temp);
          str.replace(pos, size(itr->first),
                      itr->second);  // i should replace from map value to
                                     // original "str" var
          l_temp.replace(pos, size(itr->first), itr->second);
          pos = l_temp.find((l_map));
        }
      }
      osstream << str << ' ';
    }
    oss << osstream.str().substr(0, osstream.str().size() - 1) << endl;
    osstream.str(std::string());
  }
  return replaced;
}

int main() {
  string input_str =
      "note: this is a line with multiple WORds that should be rePLACEd bE./n "
      "all instances of word eveninlargerWordsshould be repLAced.other";
  istringstream input(input_str);
  ostringstream output;
  map<string, string> replacements = {{"word", "Grouped-Letter-Uni t"},
                                      {"be", "wasp"},
                                      {"not found", "not appearing"},
                                      {"PlaCe", "LoCation"},
                                      {"other", "j"}};
  set<string> replaced_words = ReplacementCensor(input, output, replacements);
  cout << "Replaced words: ";
  for (const auto& word : replaced_words) {
    cout << word << " ";
  }
  cout << endl;
  cout << "Output: " << endl << output.str() << endl;
  return 0;
}
