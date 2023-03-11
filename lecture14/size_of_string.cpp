#include <iostream>

using namespace std;

int main() {

  char name[500];
  cin >> name;

  int size = 0;
  for (int i = 0; name[i] != '\0'; i++) {
    size++;
  }

  cout << "User has entered: " << name << " and size of the name is : " << size
       << '\n';
}
