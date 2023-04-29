

// https://leetcode.com/problems/reverse-linked-list/
ListNode *reverseList(ListNode *head) {
  if (head == nullptr or head->next == nullptr)
    return head;

  ListNode *a = nullptr;
  ListNode *b = head;
  ListNode *c = b->next;

  while (c != nullptr) {
    b->next = a;

    a = b;
    b = c;

    c = c->next;
  }

  b->next = a;
  return b;
}
