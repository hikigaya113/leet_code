// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
      struct Node* reverse( Node *head)
   {
      Node*prev=NULL;
      Node*next=NULL;
      Node*cur=head;
       
      while(cur!=NULL){
          next=cur->next;
          cur->next=prev;
          prev=cur;
          cur=next;
      }
      cur=prev;
      return cur;
  }
    
//     //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
//         // code here
       
//         Node* ans=new Node(0);
//          Node* curr=ans;
//         first=reverseList(first);
//         second=reverseList(second);
//         int carry=0;
//         while(first!=NULL||second!=NULL){   
//         int add=carry;
//             if(first!=NULL)
//             {
//             add+=first->data;
//             first=first->next;
//             }
//             if(second!=NULL)
//             {
//             add+=second->data;
//             second=second->next;
//             }
       
// //             Node* temp=new Node(add%10);
// //             carry=add/10;
          
// //                 curr->next=temp;   ////////dding new node to answer string
// //                 curr=curr->next;
            
// //         }
// //         if(carry!=0){
// //              Node* temp=new Node(carry);
// //              curr->next=temp;
// //         }
// //         ans=ans->next;    ////////removing extra zero
// //         ans=reverseList(ans);
        
// //         return ans;



// first=reverse(first);
//         second=reverse(second);
//          Node*dummy=new Node(0);
//          Node*temp=dummy;
//         int carry=0;
//         while(carry||first!=NULL||second!=NULL){
//             int sum=0;
//             if(first!=NULL){
//                 sum+=first->data;
//                 first=first->next;
//             }
//             if(second!=NULL){
//                 sum=sum+second->data;
//                 second=second->next;
                
//             }
//             sum+=carry;
//             carry=sum/10;
//             Node*bisht=new Node(sum%10);
//             temp->next=bisht;
//             temp=temp->next;
            
//         }
//         Node*res=NULL;
//         res=dummy->next;
//         res=reverseList(res);
//         return res;

  first=reverse(first);
  second=reverse(second);
  Node*dummy=new Node(0);
  Node*curr=dummy;
  int carry=0;
  while(first!=NULL||second!=NULL||carry){
      int sum=0;
      if(first!=NULL){
          sum+=first->data;
          first=first->next;
      }
      if(second!=NULL){
          sum=sum+second->data;
          second=second->next;
      }
      sum+=carry;
      carry=sum/10;
      Node*nya=new Node(sum%10);
      curr->next=nya;
      curr=curr->next;
  }
  Node*ans=dummy->next;
  ans=reverse(ans);
  return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends