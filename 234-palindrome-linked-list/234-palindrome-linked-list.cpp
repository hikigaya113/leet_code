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
     // ListNode* reverse(ListNode*head){
        //   ListNode*curr=head;
        //     ListNode*prev=NULL;
        //     ListNode*nex=NULL;
        //     while(curr!=NULL){
        //         nex=curr->next;
        //         curr->next=prev;
        //         prev=curr;
        //         curr=nex;
        //     }
        //     return curr;
        // }
    
    bool isPalindrome(ListNode* head) {
//         using extra space
//         vector<int>ans;
//        while(head!=NULL){
//            ans.push_back(head->val);
//            head=head->next;
//        } 
//         int n=ans.size();
//         for(int i=0;i<n/2;i++)
//             if(ans[i]!=ans[n-i-1]) return false;
//             return true;
        
//         without using extra space
        
       
        
//         if(head==NULL||head->next==NULL) return true;
//         ListNode*slow=head;
//         ListNode*fast=head;
        
//         while(fast!=NULL&&fast->next->next!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         slow->next=reverse(slow->next);
//         slow=slow->next;
//         ListNode*dummy=head;
        
//         while(slow!=NULL){
//             if(dummy->val!=slow->val) return false;
//             dummy=dummy->next;
//             slow=slow->next;
//         }
//         return true;

        
        
         ListNode *slow = head, *fast = head, *prev, *temp;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        prev = slow, slow = slow->next, prev->next = NULL;
        while (slow)
            temp = slow->next, slow->next = prev, prev = slow, slow = temp;
        fast = head, slow = prev;
        while (slow)
            if (fast->val != slow->val) return false;
            else fast = fast->next, slow = slow->next;
        return true;
        
    }
};