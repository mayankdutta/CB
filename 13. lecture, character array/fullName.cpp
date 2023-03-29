#include <iostream>
using namespace std;

int main() {
  char firstName[20];
  char lastName[20];

  cin >> firstName >> lastName;
  // cout << firstName << ' ' << lastName << '\n';

  char fullName[40];

  // write your program here.
  // fullName <--- firstName + ' ' + lastName

  // length_of_character_string(firstName);

  int length_of_firstName = 0;
  for (int i = 0; firstName[i] != '\0'; i++) {
    length_of_firstName++;
  }


  int length_so_far = 0;

  for (int i = 0; i < length_of_firstName; i++) {
    fullName[i] = firstName[i];
    length_so_far ++;
  }

  /********************* firstname copied. *************************/

  fullName[length_so_far] = ' ';
  length_so_far ++;

  /********************* space copied. *************************/

  int length_of_lastName = 0; 
  for (int i = 0; lastName[i] != '\0'; i++) {
    length_of_lastName ++;
  }

  for (int i = 0; i < length_of_lastName; i++) {
    fullName[i + length_so_far] = lastName[i];
  }

  /********************* lastName copied. *************************/

  cout << fullName << '\n';
}
