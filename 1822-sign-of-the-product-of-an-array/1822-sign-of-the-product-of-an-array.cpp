class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int bisht=0;
        
        for(int i=0;i<n;i++){
            
            if(nums[i]>0) count++;
            
            if(nums[i]<0) bisht++;
             
            if(nums[i]==0) return 0;
        }
        
        if(bisht%2==0) return 1;
        
        return -1;
        
    }
};