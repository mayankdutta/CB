

#include <iostream>
using namespace std;

int main() {
  cout << "Enter size: ";
  int n;
  cin >> n;

  vector<int> arr(n);

  cout << "Enter array: \n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  reverse(arr.begin(), arr.end());

  cout << "Final output: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << '\n';
}
