class Solution {
public:
    int alternateDigitSum(int n) {
        long sum=0;
        long size=0;
        int n1=n;
        int n2=n;
        int dig;
        while(n>0){
            size++;
            n=n/10;
        }
        while(n1>0){
            dig=n1%10;
            if(size%2==0){
                sum-=dig;
                size--;
            }
            else{
                sum+=dig;
                size--;
            }
            n1=n1/10;
        }
        return sum;
    }
};