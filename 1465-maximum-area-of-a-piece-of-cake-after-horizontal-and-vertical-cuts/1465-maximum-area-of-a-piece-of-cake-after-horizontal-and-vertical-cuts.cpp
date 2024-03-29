class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        
         horizontalCuts.push_back(h);
    verticalCuts.push_back(w);
    
    
    // sort both the cuts
    sort(horizontalCuts.begin(),horizontalCuts.end());
    sort(verticalCuts.begin(),verticalCuts.end());
    
    //starting cut at 0
    long long int prev=0;
    
    long long int hrlen=INT_MIN;
    
    // clculating maximum adjacent length
    for(int i=0;i<horizontalCuts.size();i++){
        hrlen=max(hrlen,abs(horizontalCuts[i]-prev));
        
        prev=horizontalCuts[i];
    }
    long long int vrlen=INT_MIN;
    prev=0;
     // clculating maximum adjacent length
    for(int i=0;i<verticalCuts.size();i++){
        vrlen=max(vrlen,abs(verticalCuts[i]-prev));
        
        prev=verticalCuts[i];
    }
    //cout<<vrlen<<" "<<hrlen;
    
    //since ans can be very large so return modulo
    return (vrlen*hrlen)%1000000007;
    }
};