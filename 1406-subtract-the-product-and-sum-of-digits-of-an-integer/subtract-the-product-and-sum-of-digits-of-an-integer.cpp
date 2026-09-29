class Solution {
public:
    int subtractProductAndSum(int n) {
        long long sum=0;
        long long prod=1;
        long long dig;
        while(n>0){
            dig=n%10;
            sum+=dig;
            prod=prod*dig;
            n=n/10;
        }
        return prod-sum;
        
    }
};