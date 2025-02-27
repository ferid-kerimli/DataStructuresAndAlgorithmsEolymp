#include <iostream>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

    ListNode *detectCycle(ListNode *head)
    {
        if (!head || !head->next)
            return NULL;

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return slow;
            }
        }
        return NULL; 
    }

    int CycleLength(ListNode *head)
    {
        ListNode *meetingPoint = head->detectCycle(head);

        if (!meetingPoint) {
            return 0;
        }

        int length = 1;

        ListNode* current = meetingPoint->next;

        while (current != meetingPoint) {
            length ++;
            current = current->next;
        }

        return length;
    }
};