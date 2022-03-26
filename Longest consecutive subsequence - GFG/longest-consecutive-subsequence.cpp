// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int nums[], int n)
    {
      //Your code here
      
    //   int count=1,maxi=1;
    //   if(n==1) return 1;
      
    //   unordered_set<int>st;
    //   for(int i=0;i<n;i++) st.insert(nums[i]);
      
    //   for(int i=0;i<n;i++){
    //       count=1;
    //       if(st.find(nums[i]-1)==st.end()){
    //           int j=nums[i]+1;
    //           while(st.find(j++)!=st.end()) count++;
    //       }
    //       maxi=max(maxi,count);
    //       }
    //       return maxi;
    
    int maxi=0,count=1;
    
    sort(nums,nums+n);
    if(n==1) return 1;
    for(int i=0;i<n;i++){
        
        int it=nums[i+1];
        
        if(nums[i]==it) continue;
        
        else if(nums[i]+1==it) count++;
        
        else  count=1;
        
        maxi=max(maxi,count);
    }
    return maxi;
    
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends