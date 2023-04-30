

#include <iostream>
#include <iterator>
#include <stack>
#include <vector>
using namespace std;

int main() {
  vector<int> arr;

  arr = {5, 4, 7, -1, 2, 10, 1};

  int n = arr.size();

  vector<int> next_less(n, n + 1);
  stack<int> st;

  for (int i = 0; i < n; i++) {
    while (!st.empty() && arr[i] < arr[st.top()]) {
      next_less[st.top()] = i;
      st.pop();
    }

    st.push(i);
  }

  for (int i = 0; i < n; i++) {
    if (next_less[i] == n + 1) {
      cout << arr[i] << ' ' << " no ans. \n";
    } else {
      cout << arr[i] << " -> " << arr[next_less[i]] << '\n';

    }
  }
}
