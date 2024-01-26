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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* t=head;
        ListNode* x=head;
        ListNode* y=head;
        while(k>1){
            k--;
            x=x->next;
            t=t->next;
        }
        while(t->next!=NULL){
            t=t->next;
            y=y->next;
        }
        int temp=y->val;
        y->val=x->val;
        x->val=temp;
        return head;
    }
};