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
        
        unordered_set<ListNode*>ha;
        
        while(head!=NULL){
            if(ha.find(head)!=ha.end()) return true;
            ha.insert(head);
            head=head->next;
        }
        return false;
    }
};