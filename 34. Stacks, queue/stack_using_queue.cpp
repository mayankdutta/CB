
#include <iostream>
#include <queue>

using namespace std;

class Stack {
  queue<int> q1;

public:
  void push(int num) {

    queue<int> q2;
    q2.push(num);

    while (!q1.empty()) {
      q2.push(q1.front());
      q1.pop();
    }

    swap(q1, q2);
  }

  void pop() {
    if (q1.empty())
      return;

    q1.pop();
  }

  int top() {
    if (q1.empty())
      return -1;
    return q1.front();
  }

  int size() { return q1.size(); }
};

int main() {
  Stack st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);

  cout << st.top() << ' ';
}
