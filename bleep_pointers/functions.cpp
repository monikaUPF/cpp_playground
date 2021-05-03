#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

void bleep(string word, string &msg) {
  regex space("\\s+");
  regex_token_iterator<string::iterator> i(msg.begin(), msg.end(), space, -1);
  regex_token_iterator<string::iterator> end;
  while (i != end) {
     string w_check = *i++;
      if (w_check == word) {
        cout << "******** ";
      } else {
        cout << w_check << " ";
      }
  }
  cout << "\n";
}