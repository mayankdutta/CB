




#include <iostream>

using namespace std; 

int main() {
  int var = 5;
  int* ptr; 

  ptr = &var; 

  cout << "value of var: " << var << '\n';
  cout << "Address of var: "<< &var << '\n';

  cout << ptr << '\n';

  cout << *ptr << '\n'; 

  cout << &ptr << '\n';
}
