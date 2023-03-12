
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char name[30];
  cin >> name;

  char vowels[] = {'a', 'e', 'i', 'o', 'u'};
  int count_vowels = 0;

  for (int i = 0; i < strlen(name); i++) {

    bool isvowel = false;

    for (int j = 0; j < 5; j++) {
      if (vowels[j] == tolower(name[i])) {
        isvowel = true;
        break;
      }
    }

    if (isvowel) {
      count_vowels++;
    }
  }

  cout << "Count : " << count_vowels << '\n';
}
