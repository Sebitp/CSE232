 #include <iostream>
#include <iterator>
#include <string>
#include <map>
#include<set>
#include <sstream>
#include<fstream>
using std::string;

using std::istringstream; using std::ostringstream; using std::cout; using std::endl;
using std::istream; using std::ostream;
using std::map; using std::set;
using std::make_pair; using std::pair; using std::string;

std::set<std::string> ReplacementCensor(std::istream& text, std::ostream& output, const std::map<std::string, std::string>& replacements) {
    std::set<std::string> replaced_words;
    std::string line;
    std::ostringstream oss;
    while (std::getline(text, line)) {
        std::string word;
        std::string new_line;
        for (std::size_t i = 0; i < line.length(); ++i) {
            char c = line[i];
            if (std::isalpha(c) || std::isdigit(c)) {
                word += std::tolower(c);  //"note: this is a line with multiple word1 (words) that should be rePLACEd bE./n "
            } else {
                auto it = replacements.find(word);
                if (it != replacements.end()) {
                    replaced_words.insert(word);
                    new_line += it->second;
                } else {
                    new_line += word;
                }
                new_line += c;
                word = "";
            }
        }
        if (!word.empty()) {
            auto it = replacements.find(word);
            if (it != replacements.end()) {
                replaced_words.insert(word);
                new_line += it->second;
            } else {
                new_line += word;
            }
        }
        oss << new_line;
    }
    output << oss.str();
    return replaced_words;
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
