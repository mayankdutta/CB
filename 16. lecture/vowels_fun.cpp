
#include <iostream>
using namespace std;

int fun(string &s) {

  int n = s.size();
  int count = 0;

  for (int i = 0; i < n; i++) {
    char current_character = s[i];
    current_character = tolower(current_character);

    if (current_character == 'a' || current_character == 'e' ||
        current_character == 'i' || current_character == 'o' ||
        current_character == 'u'

    ) {

      count++;
    }
  }

  return count;
}

int main() {
  string s;
  cin >> s;

  int count = fun(s);

  cout << "Final count is : " << count << '\n';
}
