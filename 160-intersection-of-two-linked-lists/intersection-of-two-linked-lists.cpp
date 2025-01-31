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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* d1= headA;
        ListNode* d2= headB;
        int count = 0;

        while(d1!= d2){
            
            if(d1->next == NULL&& d2->next== nullptr){
                return NULL;
                
            }
            else if(d2->next == NULL){
                d2 = headA;
                d1 = d1->next;
            }
            else if(d1->next == NULL){
                d1 = headB;
                d2 = d2->next;
            }
            else{
                d1= d1->next;
                d2= d2->next;

                
            }


        }
        return d1;
        

        
    }
};