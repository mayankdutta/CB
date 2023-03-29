

#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char first_name[30];
  char last_name[30];

  cout << "First Name: "; cin >> first_name;
  cout << "Last Name: ";  cin >> last_name;

  char full_name[50];

  int length_first_name = strlen(first_name);
  int length_last_name = strlen(last_name);

  for (int i = 0; i < length_first_name; i++) {
    full_name[i] = first_name[i];
  }

  full_name[length_first_name] = ' ';

  for (int i = 0; i < length_last_name; i++) {
    full_name[length_first_name + 1 + i] = last_name[i];
  }

  full_name[length_first_name + length_last_name + 1] = '\0';

  cout << full_name << '\n';

  // for (int i = 0; i < strlen(first_name) + strlen(last_name) + 1; i++) {
  //   cout << full_name[i];
  // }
}
