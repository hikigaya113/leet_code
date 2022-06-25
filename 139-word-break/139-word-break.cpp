class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
     
    unordered_set<int>len;
        unordered_set<string>h;
        
        for(int i=0;i<wordDict.size();i++){
            h.insert(wordDict[i]);
            len.insert(wordDict[i].size());
        }
        
        vector<bool>dp(s.size()+1,false);
        dp[s.size()]=true;
        int N=s.size();
        
        for(int i=s.size()-1;i>=0;i--){
            for(auto itr = len.begin(); itr != len.end(); itr++){
                string ss = s.substr(i, *itr);
                if(dp[min(i+*itr, N)] && h.find(ss) != h.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[0];
    }
};