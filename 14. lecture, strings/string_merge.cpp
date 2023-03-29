
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char first_name[30];
  char last_name[30];

  cout << "First Name: "; cin >> first_name;
  cout << "Last Name: ";  cin >> last_name;

  char full_name[50];

  strcat(full_name, first_name);
  strcat(full_name, " ");
  strcat(full_name, last_name);

  cout << full_name << '\n';
}
