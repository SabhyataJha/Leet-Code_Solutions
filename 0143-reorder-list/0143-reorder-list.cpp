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
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;

        ListNode *slow=head, *fast=head;

        while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        }

        ListNode *prev=nullptr, *curr=slow->next;
        slow->next=nullptr;

        while(curr){
            ListNode*nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }

        while(head &&prev){
            ListNode *n1=head->next, *n2=prev->next;
            head->next=prev;
            prev->next=n1;
            head=n1;
            prev=n2;
        }
        
    }
};





