#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  vector<int> temp = arr;

  sort(temp.begin(), temp.end());

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != temp[i]) {
      count++;
    }
  }

  cout << count << '\n';
}

// analyze test case.
// build your own testcase, and find their ans.
// then according to your approach what is the ans. 
// if both matches, implement your solution.
