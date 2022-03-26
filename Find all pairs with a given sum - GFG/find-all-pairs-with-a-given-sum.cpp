// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    vector<pair<int,int>> allPairs(int nums1[], int nums2[], int n, int m, int X)
    {
        // Your code goes here 
        map<int,int>ans1;
        
        
        for(int i=0;i<n;i++){
           ans1[nums1[i]]++;
        }
        vector<pair<int,int>>ans2;
        for(int i=0;i<m;i++){
        if(ans1.find(X-nums2[i])!=ans1.end()){
            ans2.push_back({X-nums2[i],nums2[i]});
        }
    }
    sort(ans2.begin(),ans2.end());
    return ans2;
    }
};


// { Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}  // } Driver Code Ends