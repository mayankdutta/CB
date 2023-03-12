
#include <iostream>
using namespace std;

bool is_lower(char ch) {
  if ('a' <= ch && ch <= 'z') {
    return true;
  } else {
    return false;
  }
}

char to_upper(char ch) {
  char newCh = ch - ('a' - 'A');
  return newCh;
}

int main() {
  char name[30];
  cout << "Enter name: ";
  cin >> name;

  for (int i = 0; name[i] != '\0'; i++) {
    bool check_is_lower = is_lower(name[i]);
    if (check_is_lower) {
      name[i] = to_upper(name[i]);
    }
  }

  cout << "Final output: ";
  cout << name << '\n';
}

