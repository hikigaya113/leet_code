class Solution {
    public int maxProfit(int[] prices) {
        
        int n=prices.length;
        int temp=0;
        int sum=Integer.MAX_VALUE;
        int count=0;
        for(int i=0;i<n;i++){
            if(prices[i]<sum)
                sum=prices[i];
            temp=prices[i]-sum;
            count=Math.max(temp,count);
        }
        return count;
    }
}