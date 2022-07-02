class Solution {
public:
    bool isAnagram(string s, string t) {
//         unordered_map<char,int>bisht;
        
        
//         int n=s.length();
//         if(t.length()!=n) return false;
        
//         for(int i=0;i<n;i++){
//            bisht[s[i]]++;
//             bisht[t[i]]--;
//         }
        
//         for(auto val:bisht){
//             if(val.second) return false;
            
//         }
//         return true;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;
            
    }
};