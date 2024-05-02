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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode* ptr=head,*ptr2=head;
        while(ptr){
            arr.push_back(ptr->val);
            ptr=ptr->next;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            ptr2->val=arr[i];
            ptr2=ptr2->next;
        }
        return head;
    }
};