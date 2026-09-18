class Solution {
public:
    bool isPalindrome(int x) {
        long  rev=0;
        int dig=0;
        int h=x;
        while(x>0){
            dig=x%10;
            rev=(rev*10)+dig;
            x=x/10;
        }
        if(rev==h&&h>=0){
            return true;
        }
        else{
            return false;
        }
    }
};