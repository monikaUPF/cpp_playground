#include <iostream>
#include <vector>
using namespace std;
#include "ttt_fnts.hpp"

int main() {
  string n = "\n";
  cout << "============="<< n;
  cout << "Let's play TIC TAC TOE" << n;
  cout << "============="<< n << n;

  cout << "Two players will take turns to locate noughts (o) or crossed (x) in the grid." << n << n;
  cout << "To locate your token, you should specify two numbers (1, 2, 3), the first one for row and the second for column." << n << n;

  cout << "============="<< n << n;

  int row;
  int col;
  bool ttt = false;
  int count = 0;

  vector <char> line1 = {'v', 'v', 'v'};
  vector <char> line2 = {'v', 'v', 'v'};
  vector <char> line3 = {'v', 'v', 'v'};

  // Start game
  while (ttt == false && count < 9) {

    int row;
    int column;
    char token = 'O';
    bool check_num;

    // Prompt players 1 and 2 to insert tokens

    for (int p = 1; p < 3; p++){
      count ++;
      cout << n << "XOXOXOXOXOXOXOXOXOXOX"<<n;
      cout << "This is your grid" << n << n;

      grid_print(line1);
      grid_print(line2);
      grid_print(line3, true); 

      cout << n << "XOXOXOXOXOXOXOXOXOXOX" << n << n; 

      cout << "Player " << p <<"! Your turn!" << n;

      cout << "Enter row number" << n;
      cin >> row;
      check_num = check_input(row);

      cout << "Enter column number" << n;
      cin >> column;
      check_num = check_input(column);

      
      // Check correct numbers
      if (check_num == true){
        cout << "===== Game Over ====" << n;
        ttt = true;
        break;
      }

      // Update vectors with new token. And check that place is not taken
      column -= 1;

      if (row == 1){
        if (line1[column] == 'v'){
          line1[column] = token;

        } else {
          cout << "Sorry, that position is not empty!" <<n;
          cout << "You've missed your turn" << n;
        }
        

      } 
      if (row == 2){
        if (line2[column] == 'v'){
          line2[column] = token;

        } else {
          cout << "Sorry, that position is not empty!" <<n;
          cout << "You've missed your turn" << n;
        }

      } 
      if (row == 3){
        if (line3[column] == 'v'){
          line3[column] = token;

        } else {
          cout << "Sorry, that position is not empty!" <<n;
          cout << "You've missed your turn" << n;
        }

      }

      token = 'X';
      // Check grid
      if (grid_check(line1, line2, line3) == true){
        cout << n << "XOXOXOXOXOXOXOXOXOXOX" <<n <<n;
        grid_print(line1);
        grid_print(line2);
        grid_print(line3, true); 
        ttt = true;
        cout << n << "XOXOXOXOXOXOXOXOXOXOX"<< n << n;

        break;

      } 
    }
  }
}