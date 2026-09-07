class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            int val=1;
            vector<int> res;
            res.push_back(val);
            for(int j=0;j<i;j++){
            val=val*(i-j)/(j+1);
            res.push_back(val);
            }
            ans.push_back(res);
        }
    return ans;
        
    }
};