class Solution {
public:
    int strStr(string haystack, string needle) {
//           int n=haystack.length();
//         int m=needle.length();
        
       
        
//         for(int i=0;i<n-m;i++)
//         {
//                int p=0;
            
//             for(int j=0;j<m;j++){
//                 if(haystack[i+j]!=needle[j]) break;
                
//                 p++;
//             }
//             if(p==m) return i;
//         }   
        
//         return -1;
//     }
        
        
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