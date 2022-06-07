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
    ListNode* middleNode(ListNode* head) {
        // int count=0;
        // int n=0;
        // int counter=0;
        // ListNode*temp=head;
        // while(head!=NULL)
        // {
        //     head=head->next;
        //     count++;
        // }   
        // // if(count%2!=0)
        // //  n=count/2;
        // // else
        // //      n=(count/2)+1;
        // // while(temp!=NULL){
        // //     head=head->next;
        // //     counter++;
        // //     if(counter==n){
        // //         return head;
        // //     }
        // // }
        // for(int i=0;i<count/2;i++){
        //     temp=temp->next;
        // }
        // return temp;
        
        int count=0;
         ListNode* temp=head;
        while(head!=NULL){
            count++;
            head=head->next;
        }
       
                int i=0;
      while(i<count/2){
          i++;
          temp=temp->next;
      }
            
    
    return temp;
    }
};