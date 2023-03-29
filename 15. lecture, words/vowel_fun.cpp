
#include <cstring>
#include <iostream>
using namespace std;

bool isvowel(char &ch) {
  char temp_name = tolower(ch);
  if (temp_name == 'a' || temp_name == 'e' || temp_name == 'i' ||
      temp_name == 'o' || temp_name == 'u') {
    return true;
  }
  return false;
}

int main() {
  char name[30];
  cin >> name;

  int count_vowels = 0;

  for (int i = 0; i < strlen(name); i++) {
    if (isvowel(name[i])) {
      count_vowels++;
    }
  }

  cout << "Count : " << count_vowels << '\n';
}
