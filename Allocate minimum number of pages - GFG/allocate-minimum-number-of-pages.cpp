// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    int isvalid(int nums[],int n,int M,int mid){
        int sum=0,count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>mid)
            return 0;
            else{
                sum+=nums[i];
                if(sum>mid){
                    sum=0;
                    sum=nums[i];
                    count++;
                }
            }
        }
        
        if(sum<=mid) count++;
        
        if(count<=M)
        return 1;
        return 0;
        
    }
    
    
    
    int findPages(int nums[], int n, int M) 
    {
        //code here
        long long ans=INT_MAX;
        long long low=0,high=0;
        for(int i=0;i<n;i++)
            high+=nums[i];
            while(low<=high){
                long long mid=high-(high-low)/2;
                if(isvalid(nums,n,M,mid)){
                    if(mid<ans)
                        ans=mid;
                        high=mid-1;
                }
                    
                    else
                    low=mid+1;
                
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends