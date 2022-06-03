class Solution {
public:
    int reverse(int x) {
        
        long long sum=0;
        while(abs(x)>0){
            int i=x%10;
            sum*=10;
            sum+=i;
            
            x=x/10;
}
        if(sum>INT_MAX||sum<INT_MIN)
            return false;
        return sum;
    }
};