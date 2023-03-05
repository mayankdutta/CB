

#include <iostream>
using namespace std;

int main() {
  char ch[49];

  cout << "Enter a name: ";
  cin >> ch;

  cout << "name : ";
  for (int i = 0; ch[i] != '\0'; i++)
    cout << ch[i];

  cout << '\n';
}
