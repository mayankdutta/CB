#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char sentence[300];
  cin.getline(sentence, 300);

  char sentence_new[300];

  int n = strlen(sentence);
  for (int i = 0; i < n; i++) {
    sentence_new[i] = sentence[n - 1 - i];
  }

  sentence_new[n] = '\0';
  cout << sentence_new << '\n';
}
