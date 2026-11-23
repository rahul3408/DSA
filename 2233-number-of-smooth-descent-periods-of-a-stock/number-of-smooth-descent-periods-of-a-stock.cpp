class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=0;
        long long len=1;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]-prices[i+1]==1){
                len++;
            }
            else{
                ans+=(len*(len+1))/2;
                len=1;
            }
        }
        ans+=(len*(len+1))/2;
        return ans;
    }
};