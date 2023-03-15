#include <iostream>
#include <string>

using namespace std;

int main() {



  string s0("Initial string");
  string s1;
  string s2(s0);
  string s4("A character sequence");
  string s6a(10, 'x');
  string s6b(10, 42); // 42 is the ASCII code for '*'
  string s7(s0.begin(), s0.begin() + 7);

  return 0;
}
