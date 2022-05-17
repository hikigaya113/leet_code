class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
        int ans=0;
        
        if(height.size()==0) return 0;
        
        int left=0,right=n-1;
        
        int leftMax=0,rightMax=0;
        while(left<right){
            
            if(height[left]>leftMax) leftMax=height[left];
            
            if(height[right]>rightMax) rightMax=height[right];
            
            if(leftMax<rightMax){
                ans+=max(0,leftMax-height[left]);
                left++;
            }
            
            else{
                ans+=max(0,rightMax-height[right]);
            right--;
            }
        
        
        }
         
        return ans;
          
    }
    
    };