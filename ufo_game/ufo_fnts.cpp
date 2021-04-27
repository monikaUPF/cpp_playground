#include <iostream>
#include <vector>
using namespace std;


// Define functions
void greet() {
  cout << "=============\n";
  cout << "UFO: The Game\n";
  cout << "=============\n";
  cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n\n";
}

void display_status(vector<char> inc, string an) {
  cout << "Incorrect guesses: ";
  
  if (inc.size()== 0){
    cout << "0\n";

  } else {
    for (int i= 0; i < inc.size(); i++) {
      cout << inc[i] << " ";
    }
    cout << "\n";
  }
  cout << "Codeword: ";
  for (int a =0; a < an.size(); a++) {
    cout << an[a] << " ";

  }
}

void end_game(string ans, string code) {
  if (ans == code) {
  cout << "Hooray! You saved the person and earned a medal of honor!\n";

} else {
  cout << "Oh no! The UFO just flew away with another person!\n";
}
}


void display_misses(int misses) {

  if (misses == 0 || misses == 1) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     \\        (  Send help! ) \n";
    cout << "             /   0   \\      / `-----------'  \n";
    cout << "            /  --|--  \\    /                 \n";
    cout << "           /     |     \\                     \n";
    cout << "          /     / \\     \\                   \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 2) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /  0  \\        (  Send help! ) \n";
    cout << "             / --|-- \\      / `-----------'  \n";
    cout << "            /    |    \\    /                 \n";
    cout << "           /    / \\    \\                    \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /--|--\\        (  Send help! ) \n";
    cout << "             /   |   \\      / `-----------'  \n";
    cout << "            /   / \\   \\    /                \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /--|--\\        (  Send help! ) \n";
    cout << "             /   |   \\      / `-----------'  \n";
    cout << "            /   / \\   \\    /                \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 4) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /  |  \\        (  Send help! ) \n";
    cout << "             /  / \\  \\      / `-----------' \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 5) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              / / \\ \\        (  Send help! )\n";
    cout << "             /       \\      / `-----------'  \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 6) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     \\        (  Send help! ) \n";
    cout << "             /       \\      / `-----------'  \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }

}