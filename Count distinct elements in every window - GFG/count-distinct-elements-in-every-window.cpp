// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int nums[], int n, int k)
    {
        //code here.
        unordered_map<int,int>ans;
        for(int i=0;i<k;i++)
            ans[nums[i]]++;
            int count=0;
            
            vector<int>res;
            res.push_back(ans.size());
            
            for(int i=k;i<n;i++){
                if(ans[nums[i-k]]==1) ans.erase(nums[i-k]);
                else
                ans[nums[i-k]]--;ans[nums[i]]++;
                res.push_back(ans.size());
            
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends