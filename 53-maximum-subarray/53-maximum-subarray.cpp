class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int n=nums.size();
        int sum=0;
        int maxsum=INT_MIN;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxsum=max(maxsum,sum);
            if(sum<0) sum=0;
    
        }
        return maxsum;
    }
};