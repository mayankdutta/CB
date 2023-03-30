#include <iostream> 
using namespace std; 

int fun(int i) {
  if (i == 0) return 0; 
  if (i == 1) return 1; 

  int prev1 = fun(i - 1); 
  int prev2 = fun(i - 2);

  int current_element = prev1 + prev2;

  return current_element;
}

int main() {

  cout << fun(7) << '\n';
}
