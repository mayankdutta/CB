
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  vector<int> arr;

  arr = {5, 4, 7, -1, 2, 10, 1};

  int n = arr.size();

  vector<int> previous_less(n);
  stack<int> st;

  for (int i = 0; i < n; i++) {

    //     not stack empty    stack_top is greater then arr[i]
    while (!st.empty() && arr[st.top()] >= arr[i]) {
      st.pop();
    }

    // there are only two reason that while loop will break.
    // either stack is empty ---> no ans. possible.
    // Or my ans. exists.

    if (st.empty()) {
      previous_less[i] = -1;
    } else {
      previous_less[i] = st.top();
    }

    st.push(i);
  }

  for (int i = 0; i < n; i++) {
    if (previous_less[i] == -1) {
      cout << arr[i] << " No ans.\n";
    } else {
      cout << arr[i] << " --> " << arr[previous_less[i]] << '\n';
    }
  }
}
