#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;

  Node() { next = nullptr; }

  Node(int num) {
    next = nullptr;
    data = num;
  }
};

class Queue {
  Node *head;
  Node *tail;

public:
  Queue() {
    head = nullptr;
    tail = nullptr;
  }

  void push(int num) { // push_back

    auto temp = new Node(num);

    if (head == nullptr && tail == nullptr) { // LL is empty
      head = temp;
      tail = temp;

    } else { // grow

      tail->next = temp->next;
      tail->next = temp;
      tail = temp;

    }
  }

  void pop() { // pop_back
    auto i = head ;
    while (i->next != tail) {
      i = i->next; 
    }

    i->next = nullptr; 
    delete tail; 

    tail = i;
  }

  void print() {
    cout << "printing from bottom: ";
    for (auto i = head; i != nullptr; i = i->next) {
      cout << i->data << ' ';
    }
    cout << '\n';
  }
};

int main() {
  Queue st; 
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);


  st.print();
  st.pop();

  st.print();

}
