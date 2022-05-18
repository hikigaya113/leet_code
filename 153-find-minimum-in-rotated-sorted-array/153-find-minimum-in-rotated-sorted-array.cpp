class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1) return nums[0];
        int low=0;
        int high=n-1;
        if(nums[high]>nums[0])
            return nums[0];
        
        while(high>=low){
            int mid=low+(high-low)/2;
            
            if(nums[mid]>nums[mid+1])
                return nums[mid+1];
            
            if(nums[mid-1]>nums[mid])
                return nums[mid];
            
            if(nums[mid]>nums[0])
                low=mid+1;
            else
                high=mid-1;
                
        }
        return -1;
        
    }
};