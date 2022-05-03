// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:

  bool solve(vector<int> nums, int n, int sum){
      int dp[n+1][sum+1];
       for(int i=0;i<=n;i++) dp[i][0]=1;
       for(int i=1;i<=sum;i++) dp[0][i]=0;
       
       for(int i=1;i<=n;i++)
       for(int j=1;j<=sum;j++){
           
           if(j-nums[i-1]<0) dp[i][j]=dp[i-1][j];
           else
           dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
       }
        return dp[n][sum];
  }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        
        return solve(arr, arr.size(), sum);
     
      
    }
    

};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends