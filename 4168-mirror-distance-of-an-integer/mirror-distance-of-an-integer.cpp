class Solution {
public:
    int mirrorDistance(int n) {
        int n2=n;
        int rn=0;
        int dig;
        while(n>0){
            dig=n%10;
            rn=rn*10+dig;
            n=n/10;
        }
        return abs(n2-rn);
       
        
    }
};