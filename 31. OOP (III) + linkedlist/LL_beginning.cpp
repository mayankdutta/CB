
#include <iostream>

using namespace std;

struct Node {
  int value;
  Node *next;
};

Node *head = nullptr;

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

int main() {
  add(1);
  add(2);
  add(3);
  add(2);
  add(4);

  print();
}
