

#include <cctype>
#include <iostream>
using namespace std;

int main() {
  char name[30];
  cout << "Enter name: ";
  cin >> name;

  for (int i = 0; name[i] != '\0'; i++) {
    if (islower(name[i])) {
      name[i] = toupper(name[i]);
    }
  }

  cout << "Final output: ";
  cout << name << '\n';
}
