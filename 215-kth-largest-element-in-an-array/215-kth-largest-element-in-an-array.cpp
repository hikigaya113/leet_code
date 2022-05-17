class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        
        int ans,n=nums.size();
        
        multiset<int>thor;
        
        for(int i=0;i<n;i++){
            thor.insert(nums[i]);
            if(thor.size()>k) thor.erase(thor.begin());
            
        }
        
        return *thor.begin();
        
        
        
        
    }
};