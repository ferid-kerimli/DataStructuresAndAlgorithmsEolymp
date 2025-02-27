#include <iostream>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

    int CycleLength(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head;
    
        while (b && b->next) {
            a = a->next;
            b = b->next->next;
    
            if (a == b) {
                int length = 1;
                ListNode* current = a->next;
    
                while (current != a) {
                    length++;
                    current = current->next;
                }
    
                return length;
            }
        }
    
        return 0;  
    }
};