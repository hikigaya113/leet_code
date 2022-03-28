// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        
      vector<int>vect;
        int right = c-1,left=0,top=0,down=r-1;
        int i=0,j=0,rr=1,ll=0,uu=0,dd=0;
        while(left<=right && top<=down)
        {
            if(rr==1)
            {
                rr=0;
                while(j<=right)
                {
                    vect.push_back(matrix[i][j]);
                    j++;
                }
                top++;
                i=top;
                j=right;
                dd=1;
            }
            else if(dd==1)
            {
                dd=0;
                while(i<=down)
                {
                    vect.push_back(matrix[i][j]);
                    i++;
                }
                right--;
                j=right;
                i=down;
                ll=1;
            }
            else if(ll==1)
            {
                ll=0;
                while(j>=left)
                {
                    vect.push_back(matrix[i][j]);
                    j--;
                }
                down--;
                i=down;
                j=left;
                uu=1;
            }
            else if(uu==1)
            {
                uu=0;
                while(i>=top)
                {
                    vect.push_back(matrix[i][j]);
                    i--;
                }
                left++;
                j=left;
                i=top;
                rr=1;
            }
        }
        return vect;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends