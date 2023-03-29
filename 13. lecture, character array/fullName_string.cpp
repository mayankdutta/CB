#include <iostream>

using namespace std;

int main() {
  string firstName, lastName;
  cin >> firstName >> lastName;

  string fullName;
  fullName = firstName + " " + lastName;
  cout << fullName << '\n';
}
