// https://leetcode.com/problems/odd-even-linked-list/

class Solution {
  public:
  ListNode* oddEvenList(ListNode* head) {
    if (head == nullptr) 
      return head;

    ListNode *even = head -> next;
    ListNode *odd = head;
    ListNode *evenHead = even;

    while (even != nullptr and even -> next != nullptr) {
      odd -> next = odd -> next -> next; 
      even -> next = even -> next -> next; 

      odd = odd -> next; 
      even = even -> next;
    }

    odd -> next = evenHead;
    return head;
  }
};

