class Solution {
public:
    int jump(vector<int>& nums) {
        
        int noOfJump=0,currentIntervalEnd=0,farthestReachfound=0;
        
        for(int i=0;i<nums.size()-1;i++){
            farthestReachfound=max(farthestReachfound,i+nums[i]);
            
            if(i==currentIntervalEnd){
                noOfJump++;
                currentIntervalEnd=farthestReachfound;
            }
        }
        return noOfJump;
    }
};