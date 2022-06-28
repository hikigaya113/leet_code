class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int tempArea=0,maxArea=0;
        int i=0,j=n-1;   
        while(i<j){
            tempArea=(j-i)*min(height[i],height[j]);
            maxArea=max(tempArea,maxArea);
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return maxArea;
    
            
        }
        
    
};