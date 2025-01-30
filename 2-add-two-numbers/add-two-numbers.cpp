/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int car =0;
        ListNode* h1 = l1;
        ListNode* h2 = l2;
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;


        while(h1!= NULL || h2!= NULL || car!= 0){
            int sum = 0;
            if(h1!= NULL){
                sum+= h1->val;
                h1 = h1->next;
            }
            if(h2!=NULL){
                sum+=h2->val;
                h2 = h2->next;
            }

            sum += car;
            car = sum /10;
            ListNode* nn = new ListNode(sum%10);
            temp->next = nn;
            temp = temp->next;


            
        }
        return dummy->next;


        
    }
};