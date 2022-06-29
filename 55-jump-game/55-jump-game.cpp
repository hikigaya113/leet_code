class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        
        int count=0;
        for(int i=0;i<=count;i++){
          
            count=max(count,i+nums[i]);
            if(count>=n-1)
                return true;
        }
        return false;
    }
};