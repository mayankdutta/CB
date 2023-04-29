
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  string s = "))(((())";
  vector<char> st;

  for (auto &i : s) {
    if (st.empty()) {
      st.push_back(i);
      continue;
    }

    if (st.back() == '(' && i == ')') {
      st.pop_back();
    } else {
      st.push_back(i);
    }
  }

  for (auto& i: st) {
    cout << i << ' ';
  }

  // string t; 
  // while (!st.empty()) {
  //   t += st.back();
  //   st.pop();
  // }

  // reverse(t.begin(), t.end());
  // cout << t << '\n';
}
