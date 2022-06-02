class Solution {
public:
    void rotate(vector<int>& nums, int k) {
//         k=k%nums.size();
        
//         reverse(nums.begin(),nums.end());
//         reverse(nums.begin(),nums.begin()+k);
//         reverse(nums.begin()+k,nums.end());
        
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++)
           ans[(i+k)%n]=nums[i];
        
        nums=ans;
        
    }
};