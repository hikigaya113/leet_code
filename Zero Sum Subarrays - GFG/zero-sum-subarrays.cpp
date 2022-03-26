// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll>  nums, int n ) {
        //code here
    //     unordered_map<ll,ll>m;
    //     int sum=0,c=0,h=0;
    //     for(int i=0;i<n;i++){
    //         sum+=arr[i];
    //         if(m.find(sum)==m.end()){
    //             m[sum]++;
    //         }
    //         else{
    //             c+=m[sum];
    //             m[sum]++;
    //         }
            
    //     }
    //     h=m[0];
    //     return (c+h);
    // }
    
    
    unordered_map<ll,ll>mp;
    int MaxSum=0;
    int c=0,h=0;
    for(int i=0;i<n;i++){
    MaxSum+=nums[i];
    
    if(mp.find(MaxSum)==mp.end())
    mp[MaxSum]++;
    else{
    c+=mp[MaxSum];
    mp[MaxSum]++;
    }
    
    }
    h=mp[0];
    return c+h;
    
    
    }
};


// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends