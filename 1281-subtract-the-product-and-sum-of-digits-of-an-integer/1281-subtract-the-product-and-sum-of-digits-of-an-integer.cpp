class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        
        while(n>0){
            
           int p=n%10;
            sum+=p;
            product*=p;
            n=n/10;
        }
        return (product-sum);
    }
};