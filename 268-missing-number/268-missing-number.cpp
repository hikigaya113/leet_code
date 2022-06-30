class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        
        
        int  maxi=*max_element(nums.begin(),nums.end());
        int  mini=*min_element(nums.begin(),nums.end());
        
        long long count=0;
      sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums.back()<n) return n;
        for(long long i=0;i<=n;i++){
         
            if(nums[i]!=i){
                count=i;
                break; 
            }
                
        }
        return count;
        
    }
};