class Solution {
public:
    double average(vector<int>& salary) {
        
        int n=salary.size();
        sort(salary.begin(),salary.end());
        int sum=0;
        
        for(int i=1;i<n-1;i++){
                  sum+=salary[i];  
        }
         double ans=0;
        ans=sum/((n-2)*1.0);
        
        return ans;
        
    }
};