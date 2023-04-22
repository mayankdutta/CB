

#include <iostream>
using namespace std;

class Info {
public:
  int value;

  Info() { cout << "constructor\n"; }
  ~Info() { cout << "Destructor\n"; }
};

int main() {
  {
    Info i2;
  }

  Info i1; 
}
