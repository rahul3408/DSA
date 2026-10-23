class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int low=1;
        int high=x/2;
        long long  mid;
        long long sq;
        while(low<=high){
            mid=low+((high-low)/2);
            sq=mid*mid;
            if(sq==x){
                return mid;
            }
            else if(sq>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return high;
        
    }
};