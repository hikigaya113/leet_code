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
    int pairSum(ListNode* head) {
         ListNode* slow=head,*fast=head;
        int maxi=INT_MIN;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        ListNode* nex,*prev=NULL;
        while(slow!=NULL){
            nex=slow->next;
            slow->next=prev;
            prev=slow;
            slow=nex;
        }
        
        while(prev!=NULL){

            maxi=max(maxi,head->val+prev->val);
            prev=prev->next;
            head=head->next;
        }
        return maxi;
    }
};