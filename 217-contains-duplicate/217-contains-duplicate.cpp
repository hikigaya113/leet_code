class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<n;i++){
                 
//             if(nums[i]==nums[i-1]){
//                 return true;
//             }
//         }
//         return false;
        
        unordered_set<int>thor;
        
        for(int i=0;i<n;i++) thor.insert(nums[i]);
        
        if(nums.size()!=thor.size()) return true;
        
        return false;
    }
};