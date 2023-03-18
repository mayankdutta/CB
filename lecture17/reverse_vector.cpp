
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

  vector<int> brr /*(size)*/;
  // int brr[n]; 
  for (int i = 0; i < n; i++) {
    brr[i] = arr[n - 1 - i];
    brr.push_back(arr[n - 1 - i]);
  }

  cout << "Final output: " << endl; 
  for (int i = 0; i < n; i++) {
    cout << brr[i] << ' ';
  } cout << '\n';
}
