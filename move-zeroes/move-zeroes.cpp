class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // sc=O(n),tc=O(n);
//         int n=nums.size();
        
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==0) count++;
//         }
        
//         vector<int>ans;
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0) ans.push_back(nums[i]);
//         }
//         while(count--){
//             ans.push_back(0);
//         }
        
//         for(int i=0;i<n;i++){
//             nums[i]=ans[i];
//         }
        
        // optimal solution
        
//         int lastnonezero=0;
        
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=0) { nums[lastnonezero]=nums[i];
//                             lastnonezero++;
                            
//                             }
//         }
        
//         for(int i=lastnonezero;i<nums.size();i++){
//             nums[i]=0;
//         }
        
        
        int n=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) {
               nums[n]=nums[i];
                n++;
            }
        }
        
        for(int i=n;i<nums.size();i++){
            nums[i]=0;
        }
    }
};