#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  char str[] = "welcome to india";
  int leng = strlen(str);
  for (int i = 0; i < leng; i++) {

    if (str[i] == ' ') {
      str[i] = toupper(str[i + 1]);
    }
  }
}
