// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int nums1[], int nums2[], int n, int m) {
     stack<int>st;
    for(int i=0;i<m;i++)
    st.push(nums2[i]);
    
    // for(int i=0;i<n;i++){
    //     if(st.find)
    // }
    
    
    int flag;
    while(!st.empty()){
        
        for(int i=0;i<n;i++){
            flag=0;
            if(nums1[i]==st.top()){
                
                st.pop();
                flag=1;
            break;
            }
            
        }
        if(flag==0)
    return "No";
    }
    
    return "Yes";
}