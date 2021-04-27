#include <iostream>
#include <ctime>

int main() {
  // Beginning of the story
  int music;
  int yes_no;
  srand((unsigned) time(0));

  std::cout << "This is a story about music\n";
  std::cout << "You can select what music genre you prefer.\n Enter 1 for Rock.\n Enter 2 for Jazz.\n";

  std::cin >> music;

    // Branch 1
  if (music == 1) {
    std::cout << "In the beginning there was nothing but Rock.\n";
    std::cout << "But then, someone invented the wheel...\n";
    std::cout << "...and things just began to roll\n";

    // Branch 2
    std::cout << "Do you want to roll a dice?\nEnter 1 for YES. \nEnter 2 for NO.\n";
    std::cin >> yes_no;

    if (yes_no == 1){

      int guess;
      int dice = 1 + (rand() % 6);
      std::cout << "Try to guess my number (from 1 to 6).\n";
      std::cin >> guess;

      if (guess) {
        while (guess != dice) {
          std::cout << "That's not correct, sorry! Try again!\n";
          std::cin >> guess;

      }
        if (guess == dice){
          std::cout << "That's correct! Thanks for playing!\n";
        }

      }


    } else if (yes_no == 2) {
        std::cout << "And they were happily living thereafter.\n\n";

    } else {
      std::cout << "Invalid input.\n";
    }


  } else if (music == 2) {
    std::cout << "Jazzy the bass player was grooving smoothly.\n";

    // Branch 3
    std::cout << "Do you feel in the mood for some Jazz?\nEnter 1 for NO.\nEnter 2 for NO.\n";
    std::cin >> yes_no;

    if (yes_no == 1) {
      std::cout << "Let's sing along! dub di dub di dub di dub.\n";
    } else if (yes_no == 2) {
      std::cout << "Fair enough... perhaps tomorrow.\n\n";
    }

  }
  std::cout << "====THE END====\n";
  

}