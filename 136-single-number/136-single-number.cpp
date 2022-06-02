class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>s;
        for(auto x:nums){
            s[x]++;   
        }
        for(auto z:s)
            if(z.second==1)
                return z.first;
        return -1;
    }
};