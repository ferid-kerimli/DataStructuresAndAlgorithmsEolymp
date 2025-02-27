#include <iostream>

using namespace std;

class ListNode {
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}

  void PrintReverse(ListNode *head) {
    if (head == NULL)
    return;
    PrintReverse(head->next);
    cout << head->val << " ";
  }
};