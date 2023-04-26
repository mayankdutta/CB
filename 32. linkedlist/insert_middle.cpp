
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *InsertAtMiddle(ListNode *head, int value) {
    auto slow = head;
    auto fast = head;

    while (fast != nullptr && fast->next != nullptr) {
      fast = fast->next;
      fast = fast->next;

      slow = slow->next;
    }

    // auto temp = new ListNode(value);
    auto temp = new ListNode();
    temp->val = value; 
    temp->next = nullptr;

    auto fwd = slow->next;
    slow->next = temp;
    temp->next = fwd;

    return slow;
  }
};
