

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
  ListNode *deleteStart(ListNode *head) {
    head = head->next; 
    return head;
  }
};
