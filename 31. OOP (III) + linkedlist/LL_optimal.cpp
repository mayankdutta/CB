#include <iostream>

using namespace std;

struct Node {
  int value;
  Node *next;
};

class LinkedList {

private:
  Node *head;
  Node *tail;

public:
  LinkedList() {
    head = nullptr;
    tail = nullptr;
  }

  void add_beginning(int n) {

    Node *temp = new Node();
    temp->value = n;
    temp->next = nullptr;

    if (head == nullptr) {
      head = temp;
      tail = temp;

    } else {

      temp->next = head;
      head = temp;

      delete temp;
    }
  }

  void add_end(int n) {

    Node *temp = new Node();
    temp->value = n;
    temp->next = nullptr;

    temp->next = tail->next;

    tail->next = temp;
    tail = temp;
  }

  void print() {
    for (auto i = head; i != nullptr; i = i->next) {
      cout << i->value << ' ';
    }
    cout << '\n';
  }
};

int main() {
  LinkedList list;
  list.add_beginning(1);
  list.add_beginning(2);
  list.add_beginning(3);

  list.print();

  list.add_end(1);
  list.add_end(2);
  list.add_end(3);

  list.print();
}
