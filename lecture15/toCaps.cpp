#include <cstring>
#include <iostream>
using namespace std;

void fun(char name[], int Size) {
  int length = strlen(name);
  for (int i = 0; i < length; i++) {
    if ('a' <= name[i] && name[i] <= 'z') {
      name[i] = name[i] - ('a' - 'A');
    }
  }
}

int main() {
  char name[30];
  cout << "Enter name: ";
  cin >> name;

  fun(name, 30);

  cout << "Final output: ";
  cout << name << '\n';
}
