class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n=nums.size();
        vector<int>ans;
        int low=0,high=n-1;
        while(low<high){
           
            int sum=nums[low]+nums[high];
            if(sum==target) {
                ans.push_back(low+1);
                ans.push_back(high+1);
            }
            
            if(sum>target)
                high--;
            else
                low++;
        }
        return ans;
    }
};