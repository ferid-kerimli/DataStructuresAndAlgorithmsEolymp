#include <iostream>

using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}

  ListNode* detectCycle(ListNode *head) {
    if (!head || !head->next) return NULL;

    ListNode *a = head, *b = head;

    while (b && b->next) {
        a = a->next;
        b = b->next->next;
        if (a == b) {
            a = head;
            while (a != b) {
                a = a->next;
                b = b->next;
            }
            return a; 
        }
    }
    return NULL;
  }
};