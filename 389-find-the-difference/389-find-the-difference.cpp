class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n=s.length();
        int m=t.length();
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<m;i++){
            if(s[i]!=t[i]) return t[i];
        }
        return t[0];
    }
};