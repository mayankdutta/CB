

#include <iostream>
using namespace std;

int main() {
  char input[300];
  char output[300];

  cin.getline(input, 300);


  int length = strlen(input);

  for (int i = 0; i < length; i++) {
    output[i] = input[length - 1 - i];
  }

  output[length] = '\0';

  cout << output << '\n';
}
