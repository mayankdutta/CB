

#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node *left;
  Node *right;

  Node() {
    left = nullptr;
    right = nullptr;
  }

  Node(int num) {
    val = num;
    // Node();
    left = nullptr;
    right = nullptr;
  }
};

class DLL {
  Node *head;
  Node *tail;

public:
  DLL() {
    head = nullptr;
    tail = nullptr;
  }

  void push_back(int num) {
    auto temp = new Node(num);

    if (head == nullptr && tail == nullptr) { // if my DLL is empty
      head = temp;
      tail = temp;

    } else {

      tail->right = temp;
      temp->left = tail;
      tail = temp;
    }
  }

  void push_front(int num) {
    auto temp = new Node(num);

    if (head == nullptr && tail == nullptr) { // if my DLL is empty
      head = temp;
      tail = temp;

    } else {
      head->left = temp;
      temp->right = head;
      head = temp;
    }
  }

  void pop_front() {
    head = head->right;
    head->left = nullptr;
  }

  void pop_back() {
    tail = tail->left;
    tail->right = nullptr;
  }

  void pop_middle(int num) {

    while (head->right != nullptr && head->right->val != num) {
      head = head->right;
    }

    while (tail->left != nullptr && tail->left->val != num) {
      tail = tail->left;
    }

    head->right = tail; 
    tail->left = head;

    while (head->left != nullptr) head = head->left;
    while (tail->right != nullptr) tail = tail->right;
  }

  void print() {
    for (auto i = head; i != nullptr; i = i->right) {
      cout << i->val << ' ';
    }
    cout << '\n';
  }
};

int main() {

  DLL object;

  object.push_back(1); // 1
  object.push_back(2); // 1 2
  object.push_back(3); // 1 2 3

  object.push_front(4); // 1 1 2 3
  object.push_front(5); // 2 1 1 2 3
  object.push_front(6); // 3 2 1 1 2 3

  // object.pop_front(); // 2 1 1 2 3
  // object.pop_back();  // 2 1 1 2

  object.print();

  object.pop_middle(2);

  object.print();
  object.push_front(4); // 1 1 2 3
  object.push_front(5); // 2 1 1 2 3
  object.push_front(6); // 3 2 1 1 2 3

  object.print();

  // cout << "Hello, World!";
}
