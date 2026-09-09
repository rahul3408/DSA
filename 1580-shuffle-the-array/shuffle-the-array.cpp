class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,0);
        int i=0;
        for(int k=0;k<n;k++){
            ans[i++]=nums[k];
            ans[i++]=nums[k+n];
        }
        return ans;
    }
};