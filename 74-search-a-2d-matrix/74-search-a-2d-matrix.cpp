class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int lo=0;
        if(!matrix.size()) return 0;
        int hi=(matrix.size()*matrix[0].size())-1;
        
        while(lo<=hi){
            int mid=(lo+(hi-lo)/2);
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target)
                return true;
            
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]<target)
                lo=mid+1;
                else
                    hi=mid-1;
            
        }
        return false;
    }
};