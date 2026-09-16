class Solution {
public:
    int digitFrequencyScore(int n) {
        int hash[10];
        for(int i=1;i<10;i++){
            hash[i]=0;
        }
        int ans=0;
        int digit;
        while(n>0){
          digit=n%10;
          hash[digit]++;
          n=n/10;
        }
        for(int i=1;i<10;i++){
            ans=ans+i*hash[i];
        }
        return ans;
    }
};