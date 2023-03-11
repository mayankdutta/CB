
#include <iostream>

using namespace std;

int string_length(char name[], int SIZE) {
  int size = 0;

  // i = 0, 1, 2, 3, 4, 5, 100, ....., 500
  // integer
  // '\0' <=== is a character.
  // name[i]

  for (int i = 0; name[i] != '\0'; i++) {
    size++;
  }
  return size;
}

int main() {

  char name[500];
  cin >> name;

  int size = string_length(name, 500);

  cout << "User has entered: " << name << " and, size of the name is : " << size
       << '\n';
}
