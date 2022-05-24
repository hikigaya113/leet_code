class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int n=ransomNote.length();
        int m=magazine.length();
        
        if(n>m) return false;
        map<char,int>bisht;
        for(int i=0;i<n;i++){
            bisht[ransomNote[i]]++;
        }
        
        for(int i=0;i<m;i++){
            if(bisht[magazine[i]]>0){
                bisht[magazine[i]]--;
            }
        }
        
        for(auto val:bisht)
            if(val.second!=0)
                return false;
        
        return true;
        
    }
};