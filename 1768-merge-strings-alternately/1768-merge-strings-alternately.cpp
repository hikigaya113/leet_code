class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int n=word1.length();
        int m=word2.length();
        
        string st;
        int a=0,b=0;
        
        int l=max(n,m);
        for(int i=0;i<l;i++){
            if(n){
                st=st+word1[i];
                n--;
            }
            if(m){
            st=st+word2[i];
                m--;
                }
           
        }
        return st;
    }
};