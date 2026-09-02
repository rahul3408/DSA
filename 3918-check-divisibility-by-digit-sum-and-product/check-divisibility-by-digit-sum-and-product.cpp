class Solution {
public:
    bool checkDivisibility(int n) {
        int digsum=0;
        int digpro=1;
        int dig;
        int n1=n;
        while(n>0){
            dig=n%10;
            digsum+=dig;
            digpro*=dig;
            n=n/10;
        }
        if(n1%(digsum+digpro)==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};