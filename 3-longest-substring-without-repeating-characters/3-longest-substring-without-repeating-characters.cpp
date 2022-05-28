class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//         int n = s.length();
        
//         int ans=0,start=0;
//         unordered_map<char,int>m;
        
//         if(n<=1)
//           return n;
        
//         for(int i=0;i<n;i++){
//         if(m.count(s[i]))
//         {
//             start=max(start,m[s[i]]+1);
//             m[s[i]]==i;
//         }
            
//             else{
//                 m[s[i]]==i;
//             }
//             ans=max(ans,i-start+1);
//         }
//         return ans;
        
         int n=s.size();
        int ans=0,start=0;
        unordered_map<char,int> m; // key = string character, value = character index
        
        if(n<=1)
          return n;
        
        for(int i=0; i<n; i++)
        {
            if(m.count(s[i]))   //If there's a repeated character
            {
                //Substring start index is prev index of repeated character + 1
                start=max(start,m[s[i]]+1);  
                m[s[i]]=i;    //Updating the index of the repeated character
            }
            else
            {
                m[s[i]]=i;
            }
                
            ans=max(ans,i-start+1);    //Since end index of the current substring is i 
        }
        return ans;
    }
};