#include <iostream>
#include <stack>
using namespace std;

int main() {
  string s = "))(((())";
  stack<char> st;

  for (auto &i : s) {
    if (st.empty()) {
      st.push(i);
      continue;
    }

    if (st.top() == '(' && i == ')') {
      st.pop();
    } else {
      st.push(i);
    }
  }

  string t; 
  while (!st.empty()) {
    t += st.top();
    st.pop();
  }

  reverse(t.begin(), t.end());
  cout << t << '\n';
}
