#include <iostream>

using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}

  ListNode *intersection(ListNode *l1, ListNode *l2) {
    if (!l1 || !l2) return nullptr;

    ListNode *a = l1;
    ListNode *b = l2;

    while (a != b) {
        a = (a == nullptr) ? l2 : a->next;
        b = (b == nullptr) ? l1 : b->next;
    }

    return a; 
  }
};