// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node*reverse(Node*head){
        Node*prev=NULL;
        Node* next=NULL;
        Node* cur=head;
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        cur=prev;
        return cur;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
         
       head= reverse(head);
       Node*cur=head;
      bool f=true;
        while(head!=NULL&&f==true){
            if(head->next==NULL&&head->data==9){
                head->data=1;
                Node*dummy=new Node(0);
                dummy->next=cur;
                cur=dummy;
                head=head->next;
            }
            else if(head->data==9){
                head->data=0;
                head=head->next;
            }
            else{
                head->data=head->data+1;
                head=head->next;
                f=false;
            }
        }
        cur=reverse(cur);
            return cur;
        }
    
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends