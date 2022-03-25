// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int nums1[], int nums2[], int n) {
            // code here 
            vector<int>ans;
            for(int i=0;i<n;i++){
                ans.push_back(nums1[i]);
            }
            for(int i=0;i<n;i++){
                ans.push_back(nums2[i]);
            }
            int m=ans.size()/2;
            sort(ans.begin(),ans.end());
            int sum=0;
           
                sum=ans[m-1]+ans[m];
            
return sum;
            
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends