class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        
      int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int ans=nums[1]-nums[0];
        
        for(int i=2;i<n;i++){
            
            if(nums[i]-nums[i-1]!=ans) return false;
        }
        return true;
    }
};