#include <iostream>
using namespace std;

int main() {
  string firstName;
  cin >> firstName;
  string lastName;
  cin >> lastName;

  string fullName;

  // a = 2 + 3 + 1; 
  //
  // OR
  // a = 2
  // a = a + 3
  // a = a + 1;
  //
  // fullName = firstName + " " + lastName;

  fullName = firstName;
  fullName = fullName + " ";
  fullName = fullName + lastName;

  cout << fullName << '\n';
}
