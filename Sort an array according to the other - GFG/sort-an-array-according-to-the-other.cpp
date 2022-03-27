// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> nums1, int n, vector<int> nums2, int m) 
    {
        //Your code here
        unordered_map<int,int>mp;
        
        vector<int>ans;
        
        for(int i=0;i<n;i++)
        mp[nums1[i]]++;
        
        int j=0;
        for(int i=0;i<m;i++){
            while(mp[nums2[i]]!=0){
                mp[nums2[i]]=mp[nums2[i]]-1;
                ans.push_back(nums2[i]);
                j++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(mp[nums1[i]]!=0)
            ans.push_back(nums1[i]);
        }
        sort(ans.begin()+j,ans.end());
        return ans;
        
    } 
};

// { Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
  // } Driver Code Ends