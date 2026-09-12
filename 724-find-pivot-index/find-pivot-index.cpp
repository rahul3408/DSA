class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int ls=0;
        int rs=0;
        int s=0;
        for(int i=0;i<n;i++){
            s=s+nums[i];
        }
        for(int i=0;i<n;i++){
            rs=s-ls-nums[i];
            if(rs==ls){
                return i;
            }
            ls=ls+nums[i];
        }
        return -1;
    }
};