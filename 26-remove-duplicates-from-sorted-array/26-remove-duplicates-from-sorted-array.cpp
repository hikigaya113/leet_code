class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        for(int i=0;i<n;i++)
            st.insert(nums[i]);
        
        int k=st.size();
        int j=0;
        for(int x:st){

            nums[j++]=x;
        }
        return k;
    }
};