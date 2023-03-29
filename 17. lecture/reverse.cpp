#include <iostream>
using namespace std;

int main() {
  cout << "Enter size: "; 
  int n;
  cin >> n;
  int arr[n];

  cout << "Enter array: \n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  reverse(arr + 0, arr + n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  } cout << '\n';
}
