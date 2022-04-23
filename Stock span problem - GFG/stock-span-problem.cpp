// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       
       vector<int>ans;
       stack<int>s;
       s.push(0);
       ans.push_back(1);
       int i=1;
       
       while(i<n){
       
       while(s.empty()==false && price[s.top()]<=price[i]) s.pop();
       
       if(s.empty()==true) ans.push_back(i+1);
       
       else ans.push_back(i-s.top());
       
       s.push(i);
       i++;
       }
       return ans;
       
       
       
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
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends