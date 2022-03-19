class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        
        //using xor operation
        // int n=nums.size();
        // int elem=0;
        // for(int i=0;i<n;i++){
        //     elem=elem^nums[i];
        // }
        // return elem;
        
        
        //using binarysearch
        int n=nums.size();
        int low=0;
        int high=n-2;
        while(low<=high){
            int mid=(low+high)/2;
            
            if(mid%2==0){
                if(nums[mid]!=nums[mid+1])
                    high=mid-1;
                else
                    low=mid+1;
                
            }
            else{
                if(nums[mid]==nums[mid+1])
                    high=mid-1;
                else
                    low=mid+1;
            }
        }
        return nums[low];
    }
};