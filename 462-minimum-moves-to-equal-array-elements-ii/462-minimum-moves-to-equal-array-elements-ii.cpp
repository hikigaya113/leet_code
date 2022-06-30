class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long temp=0;
       long long count=0;
            temp=nums[n/2];
        
      for(int i=0;i<n;i++){
          count+=abs(nums[i]-temp);
      }
          
    
        return count;
    }
};