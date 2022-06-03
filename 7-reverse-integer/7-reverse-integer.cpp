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
        if(sum>2147483648||sum<-2147483648)
            return false;
        return sum;
    }
};