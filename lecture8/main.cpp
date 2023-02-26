
#include <iostream>

using namespace std;

int count;


void fun() {

  if (count > 5) {
    return;
  }

  cout << "Hello\n";

  count = count + 1;
  fun();
}

int main() {
  count = 0;
  fun(count);
}


