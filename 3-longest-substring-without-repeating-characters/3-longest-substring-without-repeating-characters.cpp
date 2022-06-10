class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        
        int ans=0,start=0;
        unordered_map<char,int>m;
        
        if(n<=1)
          return n;
        
        for(int i=0;i<n;i++){
        if(m.count(s[i]))
        {
            start=max(start,m[s[i]]+1);
            m[s[i]]=i;
        }
            
            else{
                m[s[i]]=i;
            }
            ans=max(ans,i-start+1);
        }
        return ans;
        
        
    }
};