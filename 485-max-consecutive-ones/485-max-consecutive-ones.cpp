class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0,count =0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1)
                j++;
            else j=0;
            
            count=max(count,j);
        }
        return count;
    }
};