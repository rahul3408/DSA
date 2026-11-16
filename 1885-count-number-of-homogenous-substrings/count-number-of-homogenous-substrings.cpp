class Solution {
public:
    int countHomogenous(string s) {
        int n=s.length();
        long long  ans=0;
        long long len=1;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                ans+=((len*(len+1))/2)%int(pow(10,9)+7);
                len=1;
            }
            else{
                len++;
            }
        }
        ans+=((len*(len+1))/2)%int(pow(10,9)+7);
        return ans%int(pow(10,9)+7);
    }
};