class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int maxi=0;
        int count =INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<count){
                count=prices[i];
            }
            sum=prices[i]-count;
            maxi=max(sum,maxi);
    }
        return maxi;
    }
};