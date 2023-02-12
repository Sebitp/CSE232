#include <iostream>
#include <string>

char * Sandwich(std::string & line, char * bread_ptr) {
  char *temp = nullptr;
  int len = line.length() - 3;
  char c ;
  for (int i = 0; i <= len; i++){
    c = line[i];
    if (line[i] == * bread_ptr && line[i+2] == * bread_ptr){
      temp = &line[i+1];
      break;
    }
  }

  return temp;

}

int main() {
	std::string line = "nice nickolas has no banana for bob";
	char bread = 'b';
	char * filling_ptr = Sandwich(line, &bread);
	std::cout << *filling_ptr << std::endl; // Should be r
}
