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
    ListNode* rev(ListNode* head){
        ListNode* prev = nullptr;        
        ListNode* cur= head;

        while(cur!= NULL){
            ListNode* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }  
        return prev;   
    }

    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow= head;
        while(fast!= NULL && fast->next!= NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        if(fast != nullptr){
            slow = slow->next;
        }

        slow = rev(slow);
        fast = head;

        while(slow!= NULL && fast!= NULL ){
            if(fast->val != slow->val){
                return false;
            }
            fast = fast->next;
            slow = slow ->next;
        }

        return true;


        


        
    }
};