

#include <iostream>

using namespace std;

struct Node {
  int value;
  Node *next;
};

class LinkedList {
private:
  Node *head = nullptr;

public:
  void add_at_end(int number) {
    Node *temp_node = new Node();
    temp_node->value = number;
    temp_node->next = nullptr;

    auto tail = head;

    while (tail->next != nullptr) {
      tail = tail->next;
    }

    temp_node->next = tail->next;

    tail->next = temp_node;
  }

  void add(int number) {
    Node *temp_node = new Node();
    temp_node->value = number;

    if (head == nullptr) { // LL is empty
      head = temp_node;
      return;
    }

    temp_node->next = head;
    head = temp_node;
  }

  void print() {
    Node *i = head;
    while (i != nullptr) {
      cout << i->value << ' ';
      i = i->next;
    }
    cout << '\n';
  }
};

int main() {
  LinkedList list;
  list.add(1);
  list.add(2);
  list.add(3);
  list.add(2);
  list.add(4);

  list.print();
  list.add_at_end(10);
  list.add_at_end(20);

  list.print();
}
