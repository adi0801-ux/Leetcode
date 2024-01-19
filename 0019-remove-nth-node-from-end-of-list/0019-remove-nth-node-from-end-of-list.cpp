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
    ListNode* removeNthFromEnd(ListNode* head, int N) {
        ListNode* fastp = head;
        ListNode* slowp = head;

    // Move the fastp pointer N nodes ahead
        while(N){
            fastp=fastp->next;
            N--;
        }

    // If fastp becomes NULL,
    // the Nth node from the end is the head
        if (fastp == NULL){
            ListNode* toRemove=head->next;
            delete head;
            return toRemove;
        }
    // Move both pointers until fastp reaches the end
        while (fastp->next != NULL) {
            fastp = fastp->next;
            slowp = slowp->next;
        }

    // Delete the Nth node from the end
        ListNode* delNode = slowp->next;
        slowp->next = slowp->next->next;
        delete delNode;
        return head;
    }
};