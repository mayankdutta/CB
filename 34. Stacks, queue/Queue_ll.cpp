
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

  void push(int num) { // change it to push front.

    auto temp = new Node(num);

    if (head == nullptr && tail == nullptr) { // LL is empty
      head = temp;
      tail = temp;

    } else { // grow

      // tail->next = temp->next;
      // tail->next = temp;
      // tail = temp;

      temp->next = head; 
      head = temp;

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
  Queue qu; 
  qu.push(1); // 1
  qu.push(2); // 2 1
  qu.push(3); // 3 2 1
  qu.push(4); // 4 3 2 1


  qu.print();

  qu.pop(); // 4 3 2

  qu.print();

}
