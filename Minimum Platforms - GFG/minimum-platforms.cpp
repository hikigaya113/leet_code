// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    // 	\
    // 	int ans=1;
    // 	for(int i=0;i<=n-1;i++){
    // 	    int count=1;
    // 	    for(int j=i+1;j<=n-1;j++){
    // 	        if((arr[i]>=arr[j]&&arr[i]<=dep[j])||(arr[j]>=arr[i]&&arr[j]<=dep[i])) count++;
    // 	    }
    // 	    ans=max(ans,count);
    // 	}
    // 	return ans;
    
    //  sort(arr,arr+n);
    //  sort(dep,dep+n);
    //  int ans=1,count=1,i=1;
    //  int j=0;
    //  while(i<n&&j<n){
    //      if(arr[i]<=dep[j]){
    //          count++;
    //          i++;
    //      }
    //      else{
    //          count--;
    //          j++;
    //      }
    //      ans=max(ans,count);
    //  }
    //  return ans;
    
    sort(arr,arr+n);
    sort(dep,dep+n);
    int ans=1,count=1,i=1;
    int j=0;
    while(i<n&&j<n)
{
    if(arr[i]<=dep[j]){
        count++;
        i++;
    }
    else{
        count--;
        j++;
    }
    ans=max(ans,count);
}    

return ans;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends