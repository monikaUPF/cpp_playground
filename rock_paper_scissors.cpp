#include <iostream>
#include <stdlib.h>


int main() {

  srand(time(NULL));
  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
 
  std::cout << "shoot! ";
  std::cin >> user;

  if (computer == 1) {
    std::cout << "Computer got ✊\n";
  } else if (computer == 2) {
    std::cout << "Computer got ✋\n";
  } else if (computer == 3) {
    std::cout << "Computer got ✌️\n";
  } else {
    std::cout << "Ups, something went wrong with the computer!";
  }

  int winner = user - computer;

  if (user == computer) {
    std::cout << "It's a tie!\n";

  } else if (winner == 1 || winner == -2) {
    std::cout << "Congratulations! You win!\n";

  } else if (winner == 2 || winner == -1) {
    std::cout << "Ups! You lose!\n";
  } else {
    std::cout << "Something went wrong!\n";
  }
   

}