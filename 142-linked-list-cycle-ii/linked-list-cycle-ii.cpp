/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if (fast== NULL || fast->next == NULL )return NULL;
        else {
            fast = fast->next->next;
            slow = slow->next;

        }
        while(fast!= slow){
            if (fast== NULL || fast->next == NULL )return NULL;
            fast= fast->next->next;
            slow = slow->next;

        }

        fast = head;
        while(fast!= slow){
            fast = fast->next;
            slow= slow->next;
        }
        return slow;


        
        
    }
};