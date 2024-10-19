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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr && list2==nullptr){
            return nullptr;
        }
        vector<int> a;
        while(list1){
            a.push_back(list1->val);
            list1=list1->next;
        }
        while(list2){
            a.push_back(list2->val);
            list2=list2->next;
        }
        sort(a.begin(),a.end());
        ListNode* list=new ListNode(a[0]);
        ListNode* ptr=list;
        for(int i=1;i<a.size();i++){
            ListNode* list3=new ListNode(a[i]);
            ptr->next=list3;
            ptr = ptr->next;  // Move the pointer to the newly added node
            cout<<a[i];
        }

        return list;
        
        // ListNode* a = list1;
        // ListNode* ptr = list1;
        // ListNode* preptr=ptr;
        // while(!ptr || !list2){
        //     cout<<" ";
        //     if(ptr==nullptr){
        //         ptr=list2;
        //         break;
        //     }
        // }
        //     return a;
    }
};