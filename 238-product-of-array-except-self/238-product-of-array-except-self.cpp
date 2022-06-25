class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<int>ans(n);
        
        vector<int> left(n);
        vector<int> right(n);
                
//          left_Product[0] = 1;
//         for(int i = 1; i < nums.size(); i++){
//             left_Product[i] = left_Product[i - 1] * nums[i - 1];
//         }
        
//         right_Product[n - 1] = 1;
//         for (int j = n - 2; j >= 0; j--) {
//             right_Product[j] = right_Product[j + 1] * nums[j + 1];
//         }
        
//         for (int k = 0; k < n; k++) {
//             ans[k]= left_Product[k] * right_Product[k];
//         }
        
//         return ans;
        
        left[0]=1;
        for(int i=1;i<nums.size();i++)
            left[i]=left[i-1]*nums[i-1];
            
            right[n-1]=1;
            for(int i=n-2;i>=0;i--)
                right[i]=right[i+1]*nums[i+1];
                for(int k=0;k<n;k++){

                    ans[k]=left[k]*right[k];
                    
                }
                return ans;
            
        
        
        
    }
};