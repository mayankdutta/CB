#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char firstName[20];
  char lastName[20];

  cin >> firstName >> lastName;

  char fullName[40];

  int length_of_firstName = strlen(firstName);
  int length_of_lastName = strlen(lastName);

  int length_so_far = 0;

  for (int i = 0; i < length_of_firstName; i++) {
    fullName[i] = firstName[i];
    length_so_far ++;
  }

  fullName[length_so_far] = ' ';
  length_so_far ++;


  for (int i = 0; i < length_of_lastName; i++) {
    fullName[i + length_so_far] = lastName[i];
  }

  cout << fullName << '\n';
}
