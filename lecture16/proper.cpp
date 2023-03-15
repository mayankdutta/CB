#include <iostream>
using namespace std;

void method1(string &s) {

  for (int i = 0; i < s.size(); i++) {
    s[i] = tolower(s[i]);
  }

  s.front() = toupper(s.front());

  for (int i = 1; i < s.size(); i++) {
    if (s[i] == ' ') {
      s[i + 1] = toupper(s[i + 1]);
    }
  }
}

void method2(string &s) {

  // s.front() = toupper(s.front());
  // s[0] = toupper(s[0]);
  
  s = " " + s;

  for (int i = 1; i < s.size(); i++) {
    if (s[i - 1] == ' ') {
      s[i] = toupper(s[i]);
    } else {
      s[i] = tolower(s[i]);
    }
  }
  // s = "hoW aRE yoU".
  // s = " hoW aRE yoU".
  // s = " How Are You".
}

int main() {
  string s;
  getline(cin, s);

  // method1(s);
  method2(s);

  cout << "Final ans. is: " << s << '\n';
}
