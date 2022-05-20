class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int low=0,high=n-1,mid,insert=0;
        
        while(low<=high){
            mid=(low+high)/2;
            
            if(nums[mid]==target) return mid;
            
            if(nums[mid]>target)
                high=mid-1;
            else {low=mid+1;
                 insert=mid+1;
                 }
        }
        return insert;
    }
};