// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        
        string pref="";
        if(n==1) return arr[0];
        bool f=true;
        
        int minlen=INT_MAX;
        
        for(int i=0;i<n-1;i++){
            string s1=arr[i];
            string s2=arr[i+1];
        
            
            
            int x=s1.size();
            int y=s2.size();
            
            minlen=min(minlen,min(x,y));
            
            string same="";
            
            for(int k=0;k<minlen;k++){
                
                if(s1[k]==s2[k])  {
                 if(f==true) pref+=s1[k];
                 same+=s1[k];
                }
                else f=false;
            }
             if(same.size()<pref.size())  pref=same;
            }
            
            if(pref=="") return "-1";
            
            return pref;
            
 
        
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends