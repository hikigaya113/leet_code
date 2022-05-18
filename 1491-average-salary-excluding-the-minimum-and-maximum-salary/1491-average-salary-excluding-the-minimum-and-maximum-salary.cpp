class Solution {
public:
    double average(vector<int>& salary) {
        
        int n=salary.size();
        
        int sum=0;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
                  sum+=salary[i];
            mini=min(mini,salary[i]);
            maxi=max(maxi,salary[i]);
        }
        sum=sum-(mini+maxi);
         double ans=0;
        ans=sum/((n-2)*1.0);
        
        return ans;
        
    }
};