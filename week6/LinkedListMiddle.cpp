#include <iostream>

using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}

  ListNode* MiddleElement(ListNode *head) {
    if (!head) return nullptr;

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next) {
        slow = slow->next;      
        fast = fast->next->next;   
    }

    return slow;  
  }
};