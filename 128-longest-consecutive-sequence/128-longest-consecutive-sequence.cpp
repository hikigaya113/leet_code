class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         if(n==0) return 0;
        
//         int ans=1;
//         int prev=nums[0];
//         int cur=1;
        
//         for(int i=0;i<n;i++){
//             if(nums[i]==prev+1)
//                 cur++;
//             else if(nums[i]!=prev){
//                 cur=1;
//             }
            
//             prev=nums[i];
//             ans=max(ans,cur);
//         }
//         return ans;
        
        
        set<int>s;
        for(int num:nums)
            s.insert(num);
        int large=0;
        for(int num:nums){
            if(!s.count(num-1)){
                int curnum=num;
                int curstr=1;
                while(s.count(curnum+1)){
                    curnum+=1;
                    curstr+=1;
                }
                large=max(large,curstr);
            }
        }
        return large;
    }
};