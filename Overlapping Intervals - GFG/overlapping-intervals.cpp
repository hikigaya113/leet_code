// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& arr) {
         // Code here
         
          vector<vector<int>>res;
       sort(arr.begin(),arr.end());
       int s=arr[0][0];
       int e=arr[0][1];
       for(int i=1;i<arr.size();i++){
           if(arr[i][0]<=e){
               e=max(e,arr[i][1]);
           }
           else{
               res.push_back({s,e});
               s=arr[i][0];
               e=arr[i][1];
           }
       }
       res.push_back({s,e});
       return res;
   }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends