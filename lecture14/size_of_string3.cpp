

#include <cstring>
#include <iostream>

using namespace std;

int main() {

  char name[500];
  cin >> name;

  int size = strlen(name);

  cout << "User has entered: " << name << " and, size of the name is : " << size
       << '\n';
}
