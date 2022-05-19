class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            int target= -nums[i];
            int front=i+1;
            int back=n-1;
            
            while(front<back){
                int sum=nums[front]+nums[back];
                
                if(sum<target)
                    front++;
                else if(sum>target)
                    back--;
                
                else{
                    vector<int>tri={nums[i],nums[front],nums[back]};
                    ans.push_back(tri);
                    
                    while(front<back && nums[front]==tri[1]) front++;
                    while(front<back && nums[back]==tri[2]) back--;
                }
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
            
        }
        return ans;
    }
};