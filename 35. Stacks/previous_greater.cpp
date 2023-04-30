#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  vector<int> arr;

  arr = {5, 4, 7, -1, 2, 10, 1};

  int n = arr.size();

  vector<int> previous_greater(n);
  stack<int> st;

  for (int i = 0; i < n; i++) {

    while (!st.empty() && arr[st.top()] <= arr[i]) {
      st.pop();
    }

    if (st.empty())
      previous_greater[i] = -1;
    else
      previous_greater[i] = st.top();

    st.push(i);
  }

  for (int i = 0; i < n; i++) {
    if (previous_greater[i] == -1) {
      cout << arr[i] << " No solution\n";
    } else {
      cout << arr[i] << " --> " << arr[previous_greater[i]] << '\n';
    }
  }
}
