#include <iostream>
#include <vector>
using namespace std;


// Define functions
void greet() {

  cout << "=============\n";
  cout << "UFO: The Game\n";
  cout << "=============\n\n";
  cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n\n";
  cout << "You can enter letters one by one to double check whether the passcode has them\n";
  cout << "BEWARE! You can only miss 7 letters\n";
  cout << "If you miss more than 7 letters. Aliens will abduct one person.\n\n";
  cout << "=============\n";

}

void display_status(vector<char> inc, string an) {
	cout << "==Current Status==\n\n";
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
	cout << "\n\n";
	cout << "==End of status==\n\n";

}

void end_game(string ans, string code) {

	if (ans == code) {
		cout << "=======================\n";
		cout << "Hooray! You saved the person and earned a medal of honor!\n";
		cout << "=======================\n";

	} else {
		cout << "=======================\n";
		cout << "=======================\n";
		cout << "Oh no! The UFO just flew away with another person!\n";
		cout << "=======================\n";
		cout << "=======================\n";
	}

}


void display_misses(int misses) {

  if (misses < 6) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     \\        (  Try again! ) \n";
    cout << "             /   0   \\      / `-----------'  \n";
    cout << "            /  --|--  \\    /                 \n";
    cout << "           /     |     \\                     \n";
    cout << "          /     / \\     \\                   \n";
    cout << "         /               \\                   \n";

  } else if (misses == 6) {

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