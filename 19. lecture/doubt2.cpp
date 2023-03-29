#include <iostream>
using namespace std;

int main() {
  int var[5];

  int *p;
  p = var;

  *p = 10;
  p++;

  *p = 20;
  p = &var[2];

  *p = 30;
  p = var + 3;

  *p = 40;
  p = var;

  *(p + 4) = 50;

  for (int i = 0; i < 5; i++) {
    cout << var[i] << endl;
  }
}
