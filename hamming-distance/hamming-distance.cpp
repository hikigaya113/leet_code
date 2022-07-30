class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int ans=0;
        
        int nums=x^y;
        while(nums){
            ans+=nums%2;
            nums>>=1;
        }
        return ans;
    }
};