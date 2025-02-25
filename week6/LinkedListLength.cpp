#include <iostream>

using namespace std;

class ListNode {
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}

  int length(ListNode *head) {
    int count = 0;
    ListNode *current = head;
    while (current != NULL) {
      count++;
      current = current->next;
    }
    return count;
  }
};