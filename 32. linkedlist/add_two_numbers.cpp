// https://leetcode.com/problems/add-two-numbers/

#include <iostream>
using namespace std;

int main() { cout << "Hello, World!"; }

struct ListNode {
  int val;
  ListNode *next;

  ListNode() : val(0), next(nullptr) {}

  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {

    int carry = 0;
    ListNode *res = nullptr;
    ListNode *tail = nullptr;

    while (l1 != nullptr && l2 != nullptr) {
      int sum = l1->val + l2->val + carry;
      int ans = sum % 10;
      carry = sum / 10;

      l1 = l1->next;
      l2 = l2->next;

      // ListNode *temp = new ListNode(ans, nullptr);

      ListNode *temp = new ListNode();
      temp->val = ans;
      temp->next = nullptr;

      if (res == nullptr) {
        res = temp;
        tail = temp;
      } else {
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
      }
    }

    while (l1 != nullptr) {
      int sum = l1->val + carry;
      int ans = sum % 10;
      carry = sum / 10;

      l1 = l1->next;
      ListNode *temp = new ListNode(ans, nullptr);

      if (res == nullptr) {
        res = temp;
        tail = temp;
      } else {
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
      }
    }

    while (l2 != nullptr) {
      int sum = l2->val + carry;
      int ans = sum % 10;
      carry = sum / 10;

      l2 = l2->next;
      ListNode *temp = new ListNode(ans, nullptr);

      if (res == nullptr) {
        res = temp;
        tail = temp;
      } else {
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
      }
    }

    if (carry >= 1) {
      ListNode *temp = new ListNode(carry, nullptr);

      if (res == nullptr) {
        res = temp;
        tail = temp;
      } else {
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
      }
    }

    return res;
  }
};
