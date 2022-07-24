class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int maxi=0,sum=0,count=0;
        
        for(int i=1;i<n;i++){
          
            maxi+=max(prices[i]-prices[i-1],0);
                
            
            
        }
        return maxi;
    }
};