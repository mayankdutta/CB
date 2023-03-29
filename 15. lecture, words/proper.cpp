

#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[] = "welcome to india";
  int length = strlen(str);

  bool start_of_word = false;


  str[0] = toupper(str[0]);
  for(int i = 0; i < length; i++) {
    if (str[i] == ' ') {

      // str[i + 1] = toupper(str[i + 1]);

      start_of_word = true;
      continue;
    }

    if (start_of_word) {
      str[i] = toupper(str[i]);
      start_of_word = false;
    }
  }

  cout << str << '\n';
}


