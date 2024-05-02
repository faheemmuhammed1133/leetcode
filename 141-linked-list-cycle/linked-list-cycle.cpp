/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head){
            return false;
        }
        // floyd's cycle
        ListNode *slow = head, *fast = head;
        while(true) {
            slow = slow->next;
            if(fast->next == NULL || fast->next->next == NULL)
                break;
            fast = fast->next->next;
            if(slow == fast)
                return true;
        }
        
        return false;
    }
};