class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        
        if(nums.empty()) return false;
        
        int n=nums.size();
        vector<int>ans(n);
        
        ans[0]=nums[0];
        stack<int>st;
        
        for(int i=1;i<n;i++){
            
            ans[i]=min(ans[i-1],nums[i]);
        }
        for(int j=n-1;j>0;j--){
            
            while(!st.empty()&& nums[st.top()]<nums[j]){
            if(nums[st.top()]>ans[j-1])
                
             return true;
            st.pop();
            }
            st.push(j);
        }
        return false;
        
        
        
    }
};