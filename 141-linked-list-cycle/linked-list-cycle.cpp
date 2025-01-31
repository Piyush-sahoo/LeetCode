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
    bool hasCycle(ListNode *head) {
        if (head == NULL)return 0;

    
        ListNode* slow = head->next;
        ListNode* fast = head;
        if(fast!= NULL && fast->next!= NULL){
            fast = fast->next->next;
        }
        else{
            return NULL;
        }

        while(slow!= fast){

            if(slow!= NULL && slow->next != NULL)
            slow = slow->next;
            else {
                return false;
            }
            if(fast!= NULL && fast->next != NULL)
            fast = fast->next->next;
            else{
                return false;
            }
        }
        slow = head;
        while(slow!= fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;

        
    }
};