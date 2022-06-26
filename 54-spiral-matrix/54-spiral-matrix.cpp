class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>ans;
        int left=0,right=matrix[0].size()-1;
        int top=0;
        int bottom=matrix.size()-1;
        
        while(left<=right && top<=bottom){
            // traverse from left to right
            for(int i=left;i<=right;i++)
          ans.push_back(matrix[top][i]);
        top++;
        
        //traverse for, top to bottom
        for(int i=top;i<=bottom;i++)
            ans.push_back(matrix[i][right]);
        right--;
        
        if(left>right || top>bottom) break;
            
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            
            for(int i=bottom;i>=top;i--)
                ans.push_back(matrix[i][left]);
        left++;
    }
    return ans;
    }
};