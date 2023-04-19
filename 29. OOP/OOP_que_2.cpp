

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  string name[n];
  int roll[n];
  double per[n];

  for (int i = 0; i < n; i++) {
    cin >> name[i];
    cin >> roll[i];
    cin >> per[i];
  }
}
