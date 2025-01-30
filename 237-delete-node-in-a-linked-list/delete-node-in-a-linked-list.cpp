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
    void deleteNode(ListNode* node) {

        ListNode* temp1 = node;
        ListNode* temp2 = temp1->next;
        while(temp2->next!= NULL){
            temp1->val = temp2->val;
            temp1= temp2;
            temp2= temp2->next;
        }
        temp1->val = temp2->val;
        temp1->next = NULL;
        
        
    }
};