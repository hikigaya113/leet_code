class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
        int n=nums.size();
       unordered_map<int,int>s;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(s.count(target-nums[i])){
                ans.push_back(s[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
               else
               s[nums[i]]=i;
                
        }
       return nums;
        
    }
};