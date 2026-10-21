class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int sum=0;
        vector<vector<int>> ans;
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<m;j++){
                sum=0;
                for(int r=i-k;r<=i+k;r++){
                    for(int c=j-k;c<=j+k;c++){
                        if(r>=0&&r<n&&c>=0&&c<m){
                        sum+=mat[r][c];
                        }
                    }
                }
                temp.push_back(sum);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};