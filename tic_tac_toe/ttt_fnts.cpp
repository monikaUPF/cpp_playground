#include <iostream>
#include <vector>
using namespace std;
#include <functional>

bool check_input(int input){
  bool check = false;
  if (input >= 4 || input <= 0){
    cout << "Incorrect input. Please, enter coordinates between 1 and 3.\n";
    check = true;
  }
 
  return check;
  
}



void grid_print(vector <char> row, bool down = false) {
  char empty = 'v';
  for (int i = 0; i < 3; i++) {
    if (row[i] != empty && (i == 0 || i == 1)) {
      cout << "  " << row[i] << "  |";
      
    } else if (i == 0 || i == 1) {
      cout << "     |";
    } else if (row[i] != empty && i == 2) {
      cout << "  " << row[i] << "  \n";
      
    } else if (i == 2) {
      cout << "     \n";
    }
  }

  if (down == false) {
    cout << "------------------\n";

  } 
  
}



bool grid_check(vector <char> v1, vector <char> v2, vector <char> v3){
  vector <char> c1 = {v1[0], v2[0], v3[0]};
  vector <char> c2 = {v1[1], v2[1], v3[1]};
  vector <char> c3 = {v1[2], v2[2], v3[2]};
  vector <char> d1 = {v1[0], v2[1], v3[2]};
  vector <char> d2 = {v1[2], v2[1], v3[0]};
  bool result=false;

  vector <vector<char>> check_up;

  check_up.push_back(v1);
  check_up.push_back(v2);
  check_up.push_back(v3);
  check_up.push_back(c1);
  check_up.push_back(c2);
  check_up.push_back(c3);
  check_up.push_back(d1);
  check_up.push_back(d2);

  for (int u = 0; u < check_up.size(); u++){
    if (check_up[u][0] != 'v' && check_up[u][1] != 'v' && check_up[u][0]==check_up[u][1] && check_up[u][1]==check_up[u][2]){
      result = true;
      cout << "TIC TAC TOE!!\n";
      break;
    }
  }

  return result;

}