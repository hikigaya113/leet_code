class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int ans=0;
        for(auto x:columnTitle){
            
            int d=x-'A'+1;
            ans=ans*26+d;
        }
        return ans;
        
    }
};