class Solution {
    public int minCostClimbingStairs(int[] cost) {
        
        int zero=cost[0];
        int one=cost[1];
        int count=0;
        
        for(int i=2;i<cost.length;i++){
            count=cost[i]+Math.min(zero,one);
            zero=one;
            one=count;
        }
        return Math.min(zero,one);
        
    }
}