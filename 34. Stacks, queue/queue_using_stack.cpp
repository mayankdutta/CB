#include <iostream>
#include <stack>

using namespace std;

class Queue {
  stack<int> st;

public:
  void push(int num) {

    stack<int> st_temp;
    while (!st.empty()) {
      st_temp.push(st.top());
      st.pop();
    }

    st.push(num);

    while (!st_temp.empty()) {
      st.push(st_temp.top());
      st_temp.pop();
    }
  }

  int front() {
    if (st.empty()) {
      return -1;
    }

    return st.top();
  }

  int size() { return st.size(); }

  void pop() {
    if (st.empty()) {
      return;
    }
    st.pop();
  }
};

int main() {
  Queue qu;
  qu.push(1);
  qu.push(2);
  qu.push(3);
  qu.push(4);
  qu.push(5);

  cout << qu.front() << '\n';
}
