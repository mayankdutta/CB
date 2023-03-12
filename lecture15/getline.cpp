

#include <iostream>
using namespace std;

int main() {
  char name[300];
  cout << "Enter sentence: ";

  cin.getline(name, 300, '\n'); // same as cin.getline(name, 30);

  cin.getline(name, 300, ' '); // same as cin >> name;

  cout << "You entered: " << name << '\n';
}
