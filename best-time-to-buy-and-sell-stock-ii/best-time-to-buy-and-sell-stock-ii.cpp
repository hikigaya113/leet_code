class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int n= nums.size();
        int maxi=0;
       
        for(int i=1;i<n;i++){
            maxi+=max(nums[i]-nums[i-1],0);
            
        }
        return maxi;
    }
};