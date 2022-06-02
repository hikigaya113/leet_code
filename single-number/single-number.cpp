class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>s;
        for(auto x:nums){
            s[x]++;   
        }
        for(auto z:s)
            if(z.second==1)
                return z.first;
        return -1;
        
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
        
//         for(int i=1;i<n;i+2){
//             if(nums[i]!=nums[i-1])
//                 return nums[i-1];
//         }
//         return nums[n-1];
    }
};