class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int m=haystack.length(),n=needle.length();
        
        for(int i=0;i<=m-n;i++){
            int p=0;
            for(int j=0;j<n;j++){
            if(haystack[i+j]!=needle[j]) break;
                p++;
                }
            
            if(p==n) return i;
        }
        
        return -1;
    }
};