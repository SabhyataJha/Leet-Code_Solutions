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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = &dummy;

        // Walk the list
        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                curr->next = curr->next->next; // Snip the matching node out!
            } else {
                curr = curr->next;             // Move forward normally
            }
        }

        return dummy.next;
    }
};