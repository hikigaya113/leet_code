// { Driver Code Starts

#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int numOfPairs(int x[], int y[], int n) {
        // code here
      int ans=0;
      unordered_map<int,int>x1,y1;
      unordered_map<string,int>xy1;
      
      for(int i=0;i<n;i++){
          string s=to_string(x[i]) + ","+to_string(y[i]);
          ans+=x1[x[i]]+y1[y[i]]-2*xy1[s];
          
          x1[x[i]]++;
          y1[y[i]]++;
          xy1[s]++;
          
      }
      
      return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int X[N], Y[N];
        
        for(int i=0; i<N; i++)
            cin>>X[i];
        for(int i=0; i<N; i++)
            cin>>Y[i];

        Solution ob;
        cout << ob.numOfPairs(X,Y,N) << endl;
    }
    return 0;
}  // } Driver Code Ends