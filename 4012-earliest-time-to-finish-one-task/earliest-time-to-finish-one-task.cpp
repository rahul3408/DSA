class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int sum=0;
        int min1=INT_MAX;
        for(vector<int> val:tasks){
            sum=val[0]+val[1];
            min1=min(min1,sum);
        }
        return min1;
    }
};