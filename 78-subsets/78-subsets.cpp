class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        
        // BACKTRACKING
        
//         int n=nums.size();
//         vector<vector<int>>ans;
//         vector<int>v;
        
// //         subset(nums,ans,v,0);
// //         return ans;
            
// //         }
    
// //     void subset(vector<int>&nums,vector<vector<int>>&ans,vector<int>v,int start){
        
// //         if(start==nums.size()){
// //             ans.push_back(v);
// //             return;
// //         }
        
// //         v.push_back(nums[start]);
// //         subset(nums,ans,v,start+1);
        
// //         v.pop_back();
// //         subset(nums,ans,v,start+1);
        
        
        //ITERATIVE
        
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>v;
        ans.push_back({});
        for(int i=0;i<n;i++){

            int s=ans.size();
            for(int j=0;j<s;j++){
                v=ans[j];
                v.push_back(nums[i]);
                ans.push_back(v);
            }
        }
        return ans;
        
}
    
};