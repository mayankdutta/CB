// https://leetcode.com/problems/linked-list-cycle/

bool hasCycle(ListNode *head) {
  if (!head)
    return false;
  auto s = head;
  auto f = head;

  while (f->next and f->next->next) {
    s = s->next;
    f = f->next->next;

    if (s == f)
      return true;
  }
  return false;
}
