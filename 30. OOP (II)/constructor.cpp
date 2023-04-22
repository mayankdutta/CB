

#include <iostream>
using namespace std;

class Info {
public:
  int value;

  Info()             { cout << "A\n"; }
  Info(int n)        { cout << "B\n"; }
  Info(int n, int p) { cout << "C\n"; }

  Info(Info &info) {
    // value = info.value;
  }
};

int main() {
  Info i1; // A
  Info i2; // A
  Info i3(2); // B
  Info i4(2, 3); // C
  Info i5(3); // B

  Info i6(i5);

  string s = "abc"; 
  string t(s);

  t = s;

}
