// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int nums[], int m, int n) {

        // code here.
        
            
            sort(nums,nums+m);
            vector<long long>ans(n+1,0);
            
            ans[0]=1;
            
            for(int i=1;i<=m;i++){
                
                for(int sum=1;sum<=n;sum++){
                    
                    if(nums[i-1]<=sum) ans[sum]+=ans[sum-nums[i-1]];
                }
            }
            
            return ans[n];
      
        }
        
        
        
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends