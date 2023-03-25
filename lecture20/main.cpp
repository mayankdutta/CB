
#include <cstring>
#include <iostream>
using namespace std;
#include <vector>
int main() {
  vector<int> arr = {3, 4, 6, 8, 12, 13, 14, 17};
  auto it = find(arr.begin(), arr.end(), 17);
  cout << *it;
}
