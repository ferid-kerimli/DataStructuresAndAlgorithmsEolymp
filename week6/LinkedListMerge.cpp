#include <iostream>

using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}

  ListNode* merge(ListNode *l1, ListNode *l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    ListNode *dummy = new ListNode(0); 
    ListNode *current = dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    if (l1) current->next = l1;
    if (l2) current->next = l2;

    return dummy->next;
  }
};