class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        
        int n=nums.size();
        
//      vector<int>ans;
//         for(int x:nums){
//             if(ans.empty()|| ans[ans.size()-1]<x){
// ans.push_back(x);}
//             else
//             {
//          auto it=lower_bound(ans.begin(),ans.end(),x);
//                 *it=x;
//                 }
//         }
        
//             return ans.size();
        
        vector<int>ans;
        
        ans.push_back(nums[0]);
        int len=1;
        
        for(int i=1;i<n;i++){
            
            if(nums[i]>ans.back()){
            ans.push_back(nums[i]);
            len++;
        }
        
        else{
            int ind=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
            ans[ind]=nums[i];
        }
        }
        return len;
    }
};