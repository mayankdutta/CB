

#include <iostream>
using namespace std;

int main() {

  char sentence[300000];
  cin.getline(sentence, 300000);

  int count_space = 0;

  // for (int i = 0; i < strlen(sentence); i++) {

  for (int i = 0; sentence[i] != '\0'; i++) {
    if (sentence[i] == ' ') {
      count_space++;
    }
  }

  cout << "Spacing is : " << count_space << '\n';
}
