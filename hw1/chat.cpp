#include <iostream>
#include <string>
#include <cctype>

int main() {
  std::string line;
  while (std::getline(std::cin, line)) {
    for (int i = 0; i < line.size(); ++i) {
      if (isalpha(line[i])) {
        std::cout << line[i];
        while (i + 1 < line.size() && isalpha(line[i + 1])) {
          ++i;
        }
      }
    }
  }
  return 0;
}