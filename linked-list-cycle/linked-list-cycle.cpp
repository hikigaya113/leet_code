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
        //    unordered_set<ListNode*>hash;
        // while(head!=NULL){
        //     if(hash.find(head)!=hash.end()) return true;
        //     hash.insert(head);
        //     head=head->next;
        // }
        // return false;
        
       ListNode*slow=head,*fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};