class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(vector<int> val:grid){
            for(int val2: val){
                if(val2<0){
                    count++;
                }
            }
        }
        return count;
        
    }
};