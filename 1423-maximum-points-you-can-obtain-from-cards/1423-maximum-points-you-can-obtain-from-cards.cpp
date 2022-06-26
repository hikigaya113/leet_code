class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        
        int n=cardPoints.size();
        
        int maxi=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=cardPoints[i];
        }
       
            if(n==k)
                return sum;
        
        int window=0,left=0,right=n-k;
        for(int i=0;i<right;i++)
            window+=cardPoints[i];
        
        int ans=sum-window;
        while(right<n){
            window-=cardPoints[left++];
            window+=cardPoints[right++];
            
            ans=max(sum-window,ans);
        }
        return ans;
    }
};