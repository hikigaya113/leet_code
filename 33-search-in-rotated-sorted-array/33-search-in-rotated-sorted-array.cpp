class Solution {
public:
    int search(vector<int>& nums, int target) {
 
        //simply itirate through the array
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target)
                return i;
            
        }
        
        return -1;
    }
        
        
        
        //using binarysearch
        
//         int n=nums.size();
//         int low=0,high=n-1;
        
//         while(low<=high){
//             int mid=(low+high)/2;
            
//             if(nums[mid]==target) return mid;
            
            
//             if(nums[low]<=nums[mid]&&nums[mid]>=target){
//             if(nums[low]<=target){
//                 high=mid-1;
//             }
            
//             else
//                 low=mid+1;
//             }
//             else{
//                 if(nums[mid]<=target&&target<=nums[high])
//                     low=mid+1;
//                 else
//                     high=mid-1;
//             }
//          }
//         return -1;
    
};