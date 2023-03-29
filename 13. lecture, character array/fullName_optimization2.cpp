
#include <cstring>
#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char firstName[20];
  char lastName[20];

  cin >> firstName >> lastName;

  char fullName[40];

  int length_of_firstName = strlen(firstName);
  int length_of_lastName = strlen(lastName);

  int length_so_far = 0;

  strcat(fullName, firstName);
  strcat(fullName, " ");
  strcat(fullName, lastName);

  cout << fullName << '\n';
}
