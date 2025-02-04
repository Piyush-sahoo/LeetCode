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
    int lenn(ListNode* head){
        int count = 0;
        while(head!= NULL){
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* lol = head;
        int n = lenn(lol);
        if(n ==0)return head;
        k = k%n;
        if (k == 0)return head;

        int count = n-k;
        ListNode* temp = head;
        while(count> 1){
            temp = temp->next;
            count--;
        }

        ListNode* h2 = temp->next;
        ListNode* h3 = h2;
        temp->next = NULL;

        while(h3->next!= NULL){
            h3 = h3->next;
        }

        h3->next = head;
        return h2;

        
        
    }
};