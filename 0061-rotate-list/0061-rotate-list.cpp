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
    ListNode* findNthNode(ListNode*head,int k){
        ListNode *temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            if(cnt==k)return temp;
            cnt++;
            temp=temp->next;
        }
        return NULL;
    }
    ListNode* rotateRight(ListNode* head, int k) {
      
        if (head==NULL || k==0)return head;
        ListNode *tail=head;
        int size=1;
        while(tail->next!=NULL){
            size++;
            tail=tail->next;
        }
        tail->next=head;
        k=k%size;
        ListNode* last= findNthNode(head,size-k);
        head=last->next;
        last->next=NULL;
        return head;
    }
};