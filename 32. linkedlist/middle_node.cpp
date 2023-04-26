// https://leetcode.com/problems/middle-of-the-linked-list/

// naive method

class Solution {
public:
  ListNode *middleNode(ListNode *head) {
    int count = 0;
    auto middle = head;
    while (middle != nullptr) {
      middle = middle->next;
      count++;
    }

    count /= 2;
    middle = head;
    while (count--) {
      middle = middle->next;
    }

    return middle;
  }
};

// hare & tortoise method

class Solution {
public:
  ListNode *middleNode(ListNode *head) {
    auto slow = head;
    auto fast = head;

    while (fast != nullptr && fast->next != nullptr) {
      fast = fast->next;
      fast = fast->next;

      slow = slow->next;
    }

    return slow;
  }
};
