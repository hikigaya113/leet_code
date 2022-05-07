class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        
      int n=nums.size();
//         int leftMin=nums[0];
//         for(int j=1;j<n-1;j++){
//             for(int k=j+1;k<n;k++){
                
//                 if(nums[k]>leftMin && nums[j]>nums[k])
//                     return true;
//             }
//             leftMin=min(nums[j],leftMin);
            
//         }
//         return false;
        
        vector<int>ans(n);
        stack<int>st;
        
        ans[0]=nums[0];
        for(int i=1;i<n;i++){
            
            ans[i]=min(ans[i-1],nums[i]);
        }
        
            for(int j=n-1;j>=0;j--){
                if(nums[j]>ans[j]){
                    while(!st.empty()&&st.top()<=ans[j])
                        st.pop();
                    if(!st.empty()&&st.top()<nums[j]) return true;
                    st.push(nums[j]);
                }
            }
        return false;
    }
};