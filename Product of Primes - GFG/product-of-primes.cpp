// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

  bool primecheck(long long n){
      if(n<=1) return false;
      
      
      
      for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0;
      
      return 1;
  }

    long long primeProduct(long long L, long long R){
        // code here
        
        long long product=1;
        
        long long MOD=1e9+7;
        for(int i=L;i<=R;i++)
        if(primecheck(i))  product=(product*i)%MOD;
        
        return product;
    }


 
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends