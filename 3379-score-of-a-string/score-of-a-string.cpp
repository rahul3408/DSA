class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int sum=0;
        int diff;
        for(int i=0;i<n-1;i++){
            diff=abs(int(s[i])-int(s[i+1]));
            sum+=diff;
        }
        return sum;
    }
};