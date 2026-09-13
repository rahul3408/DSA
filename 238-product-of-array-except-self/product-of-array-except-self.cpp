class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> m(n,1);
        for(int i=1;i<n;i++){
             m[i]=m[i-1]*nums[i-1];
        }
        int rp=1;
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            if(i!=n-1){
            rp=rp*nums[i+1];
            }
            ans.push_back(rp*m[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};