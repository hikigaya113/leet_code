class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // wrong answer
        
//         int n=nums.size();
//         vector<vector<int>>ans;
//         vector<int>v;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n-2;i++){
//             for(int j=i+1;j<n-1;j++){
//                for(int k=j+1;k<n;k++){
//                    v.clear();
//                    if((nums[i]+nums[j]+nums[k])==0&&i!=j&&j!=k&&k!=i){
//                        v.push_back(nums[i]);
//                        v.push_back(nums[j]);
//                        v.push_back(nums[k]);
//                         // ans.push_back(v);
//                    }
//                    if(v.size()!=0)
//                    ans.push_back(v);
//                }
//             }
//         }
        
//         return ans;
        
        
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i==0||(i>0&&nums[i]!=nums[i-1])){
                int lo = i+1, hi = (int)(nums.size())-1, sum = 0 - nums[i];
                
                while (lo < hi) {
                    if (nums[lo] + nums[hi] == sum) {
                        
                        vector<int> temp; 
                        temp.push_back(nums[i]); 
                        temp.push_back(nums[lo]); 
                        temp.push_back(nums[hi]); 
                        ans.push_back(temp);
                        
                        while (lo < hi && nums[lo] == nums[lo+1]) lo++;
                        while (lo < hi && nums[hi] == nums[hi-1]) hi--;
                        
                        lo++; hi--;
                    } 
                    else if (nums[lo] + nums[hi] < sum) lo++;
                    else hi--;
               }
        }
    }
    return ans;
        }
        
    
};