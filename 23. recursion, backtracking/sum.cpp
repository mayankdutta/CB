

#include <iostream>
#include <vector>
using namespace std;

int fun1(int index, vector<int> arr) {
  if (index == arr.size() - 1) {
    return arr[index];
  }

  int sum_of_rest = fun1(index + 1, arr);
  int sum = arr[index] + sum_of_rest;

  return sum;
}

int fun2(int index, vector<int> arr) {
  if (index == 0) {
    return arr[0];
  }

  int sum = arr[index] + fun2(index - 1, arr);
  return sum;
}

int main() {
  vector<int> arr{1, 2, 3, 4, 5};

  int ans1 = fun1(0, arr);
  int ans2 = fun2(arr.size() - 1, arr);

  cout << "my final ans: " << ans1 << '\n';
}
