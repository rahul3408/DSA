class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max1=0;
        for(auto val:accounts){
            int sum=0;
            for(int v:val){
                sum+=v;
            }
            max1=max(max1,sum);
        }
        return max1;
    }
};