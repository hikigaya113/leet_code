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
    ListNode *detectCycle(ListNode *head) {
        
        //brute force using hashmap/set
        
        
//         unordered_set<ListNode*>st;
//         while(head!=NULL){
//             if(st.find(head)!=st.end()) return head;
//             st.insert(head);
//             head= head->next;
//         }
//         return NULL;
        if(head==NULL||head->next==NULL) return NULL;
        
        ListNode* fast=head;
        ListNode*slow=head;
        ListNode*entry=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
          fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                while(slow!=entry){
                    slow=slow->next;
                    entry=entry->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};