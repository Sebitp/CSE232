#include <string>
using std::string; using std::to_string;
#include <iostream>
using std::cout; using std::cin; using std::endl;
int main() {
    string word,guess,temp;
    int count = 0;
    cout << "Give me a secret word: " << endl;
    cin >> word;
    cout << "Give me a guess: " << endl;
    while(cin >> guess){
        temp = "";
        for ( size_t i = 0; i < word.size(); i++){
            if (guess[i] == word[i]){
                temp += guess[i];
            } else if(word.find(guess[i]) != string::npos){
                temp += '?';
            } else {
                temp+= '.';
            }
        }
        cout << temp << endl;
        count ++;
        if (guess == word){
            cout << "You Win!" << endl;
            count = 6;
            break;
        } else if(count == 6){
            cout << "You Lose." << endl;
            break;
        }
        cout << "Give me a guess: " << endl;
    }
    if (count != 6){
        cout << "You Lose." << endl;
    }

}