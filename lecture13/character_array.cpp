#include <iostream>
using namespace std;

int main() {
  char ch[10];
  for (int i = 0; i < 10; i++) {
    cout << "value in character array at " << i + 1
         << " position is : " << ch[i] << '\n';
  }
}
