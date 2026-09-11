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
    ListNode* swapPairs(ListNode* head) {

        if(!head || !head->next) return head;

        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev= &dummy;

        while(prev->next && prev-> next->next){

        ListNode* first=prev->next;
        ListNode* second=prev->next->next;

        first->next=second->next;  //1->3
        second->next= first; // 2->1
        prev->next= second; // dummy->2

        //so, overall the ans becoomes: dummy-> 2->1 ->4 ->3 ->nullptr;

        prev=first;
        } //jumps forward by 2 nodes and anchor moves to node 1;
        
        return dummy.next;
    }
};