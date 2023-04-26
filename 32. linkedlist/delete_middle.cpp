// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *deleteMiddle(ListNode *head) {

    auto slow = head;
    auto fast = head;
    auto prev_slow = head;

    while (fast != nullptr && fast->next != nullptr) {
      fast = fast->next;
      fast = fast->next;

      prev_slow = slow;

      slow = slow->next;
    }

    prev_slow->next = slow->next;

    if (slow == head) {
      return nullptr;
    }

    return head;
  }
};
