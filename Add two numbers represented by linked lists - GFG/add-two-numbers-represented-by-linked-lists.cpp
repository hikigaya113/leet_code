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
      struct Node* reverseList(struct Node *head)
   {
       if(head==NULL||head->next==NULL)return head;
       struct Node* temp=head->next;
       struct Node* t=reverseList(temp);
       temp->next=head;
       head->next=NULL;
       return t;
   }
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
        // code here
       
        struct Node* ans=new Node(0);
        struct Node* curr=ans;
        first=reverseList(first);
        second=reverseList(second);
        int carry=0;
        while(first!=NULL||second!=NULL){   
        int add=carry;
            if(first!=NULL)
            {
            add+=first->data;
            first=first->next;
            }
            if(second!=NULL)
            {
            add+=second->data;
            second=second->next;
            }
       
            Node* temp=new Node(add%10);
            carry=add/10;
          
                curr->next=temp;   ////////dding new node to answer string
                curr=curr->next;
            
        }
        if(carry!=0){
             Node* temp=new Node(carry);
             curr->next=temp;
        }
        ans=ans->next;    ////////removing extra zero
        ans=reverseList(ans);
        
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