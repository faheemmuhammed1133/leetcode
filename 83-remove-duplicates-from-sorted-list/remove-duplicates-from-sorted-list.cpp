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
    ListNode* deleteDuplicates(ListNode* head) {
        // If list is empty or has only one element, no duplicates exist
        if (!head || !head->next) {
            return head;
        }

        // Pointer to traverse the list
        ListNode* current = head;

        // Traverse until the end of list
        while (current && current->next) {
            if (current->val == current->next->val) {
                // Duplicate node found: skip it
                ListNode* duplicate = current->next;
                current->next = duplicate->next;
                // Optionally free duplicate if using dynamic allocation
                // delete duplicate;
            } else {
                // Move to next distinct element
                current = current->next;
            }
        }

        return head;
    }
};