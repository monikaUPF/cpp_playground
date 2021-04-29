#include <iostream>
#include <vector>
using namespace std;
#include "profile.hpp"

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pron) 
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pron) {

}

string Profile::view_profile() {
  string info = "Name: " + name;
  info += "\nAge: " + to_string(age);
  info += "\nPronouns: " + pronouns;
  string hobby_string = "\nHobbies:\n";

  for (string hobby : hobbies) {
    hobby_string += "\t" + hobby + "\n";
  }

return info + hobby_string;
}

void Profile::add_hobby(string new_hobby) {
  hobbies.push_back(new_hobby);
}


