class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        
        int mini=nums[0],maxi=nums[0],ans=nums[0];
        
        for(int i=1;i<n;i++){
            if(nums[i]<0)
                swap(mini,maxi);
            mini=min(nums[i],mini*nums[i]);
            maxi=max(nums[i],maxi*nums[i]);
            ans=max(ans,maxi);
        }
        return ans;
        
    }
};