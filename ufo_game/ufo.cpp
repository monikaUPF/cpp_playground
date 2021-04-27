#include <iostream>
#include "ufo_fnts.hpp"
using namespace std;

int main() {
  greet();

  string codeword = "codecademy";
  string answer = "__________";
  int misses = 0;
  vector<char> incorrect;
  bool guess = false;

  char letter;

  while (answer != codeword && misses < 7) {
    display_status(incorrect, answer);
    cout << "Please, enter your guess: \n";
    cin >> letter;

    for (int c=0; c< codeword.size(); c++) {
      if (letter == codeword[c]) {
        answer[c] = letter;
        guess = true;

      }
    }

    if (guess == true) {
      cout << "Correct!\n";
    } else {
      cout << "Incorrect!\n";
      incorrect.push_back(letter);
      misses ++;

    }
    display_misses(misses);
    guess = false;

  }

  end_game(answer, codeword);

}