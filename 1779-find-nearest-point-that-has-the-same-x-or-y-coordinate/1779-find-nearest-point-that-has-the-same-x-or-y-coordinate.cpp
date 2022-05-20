class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int n=points.size();
        
        int mini=INT_MAX,ans=-1,manh;
        
        for(int i=0;i<n;i++)
            if(points[i][0]==x || points[i][1]==y){
                manh=abs(x-points[i][0]) + abs(y-points[i][1]);
            
                if(manh<mini){
                    mini=manh;
                ans=i;
                }
            
            }
        
        
        return ans;
    }
};