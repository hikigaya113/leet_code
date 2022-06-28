class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int one=0,two=0,three=0;
       for(int i=0;i<n;i++){
           if(nums[i]==0)
               one++;
        else if(nums[i]==1)
            two++;
        else
            three++;
          
    }
        vector<int>ans;
    
        while(one--)
            ans.push_back(0);
    
            while(two--)
                ans.push_back(1);
                    
                while(three--)
                    ans.push_back(2);
            
      for(int i=0;i<n;i++){
          nums[i]=ans[i];
      }
    }
};