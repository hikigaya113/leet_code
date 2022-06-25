class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>v;
        
        subset(nums,ans,v,0);
        return ans;
            
        }
    
    void subset(vector<int>&nums,vector<vector<int>>&ans,vector<int>v,int start){
        
        if(start==nums.size()){
            ans.push_back(v);
            return;
        }
        
        v.push_back(nums[start]);
        subset(nums,ans,v,start+1);
        
        v.pop_back();
        subset(nums,ans,v,start+1);
        
        
}
    
};