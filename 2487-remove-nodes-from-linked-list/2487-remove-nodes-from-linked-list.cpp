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
    ListNode* reverse(ListNode* root){
        ListNode*prev = NULL;
        ListNode* curr=root;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        ListNode* curr=head;
        int ma=head->val;
        ListNode* prev=head;
        while(curr){
            if(curr->val>=ma){
                ma=curr->val;
                prev=curr;
                curr=curr->next;
            }else{
                prev->next=curr->next;
                curr=prev->next;
            }
        }
        head=reverse(head);
        return head;
    }
};