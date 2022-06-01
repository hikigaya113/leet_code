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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
         if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        if(l1->val>=l2->val) l2->next = mergeTwoLists(l1, l2-> next);
        else{
            l1->next = mergeTwoLists(l1->next, l2);
            l2 = l1;
        }return l2;
        
        
//         if(list1==NULL) return list2;
//         if(list2==NULL) return list1;
        
        
//         ListNode* ans=list1;
//         while(list1!=NULL &&list2!=NULL){
//               ListNode*temp=NULL;
//             while(list1!=NULL&&list1->val<=list2->val){
//                 temp=list1;
//                 list1=list1->next;
//             }
//             temp->next=list2;
//             swap(list1,list2);
            
//             }
//         return ans;
    }
};