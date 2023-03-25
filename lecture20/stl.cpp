#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {3, 4, 6, 8, 12, 13, 14, 17};

  auto it = find(arr.begin(), arr.end(), 17);

  cout << "value: " << *it << '\n';
  cout << "index: " << it - arr.begin() << '\n';
  cout << "index from right: " << arr.end() - 1 - it << '\n';


  vector<int>::iterator it2 = find(arr.begin(), arr.end(), 100);

  if (it2 == arr.end()) {
    cout << "Element doesn't exist\n";
  } else {
    cout << *it2 << '\n';
  }

}
