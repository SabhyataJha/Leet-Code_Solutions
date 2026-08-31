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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;      // Points to what's behind us (starts at null)
        ListNode* current = head;      // The node we are currently standing on

        while (current != nullptr) {
            ListNode* next_temp = current->next; // Grab the safety rope so we don't lose the rest
            current->next = prev;                // Flip the arrow backward
            prev = current;                      // Shift prev forward
            current = next_temp;                 // Shift current forward
        }

        return prev; // prev is now sitting on the new head
    }
};