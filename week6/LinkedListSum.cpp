#include <iostream>

using namespace std;

class ListNode {
    
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}

  int sum(ListNode *head) {
    int total = 0;
    ListNode *current = head;
    while (current != NULL) {
      total += current->val;
      current = current->next;
    }
    return total;
  }

};