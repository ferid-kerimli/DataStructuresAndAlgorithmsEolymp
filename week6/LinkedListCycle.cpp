#include <iostream>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

    int hasCycle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return 0;

        ListNode *slow = head, *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return 1; 
        }
        return 0; 
    }
};