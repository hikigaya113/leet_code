class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        int n= digits.length();
        vector<string>phone={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(n==0)
            return {};
     
        queue<string>q;
        vector<string>ans;
        
        q.push("");
        
        while(!q.empty()){
            string s=q.front();
            q.pop();
            
            if(s.length()==digits.length())
                ans.push_back(s);
            else{
                string temp=phone[digits[s.length()]-'0'];
            for(auto i:temp)
                q.push(s+i);
        }
        }
        
        return ans;
    }
};