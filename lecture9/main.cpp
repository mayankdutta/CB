#include <iostream>
using namespace std;

int variable; 

void multiplyByTwo(int variable) {

  ::variable = ::variable * 2;

}

int main () {
  variable = 5; 

  multiplyByTwo(variable);

  cout << "value of variable: " << variable << '\n';
}
