class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> m(n,1);
        for(int i=1;i<n;i++){
             m[i]=m[i-1]*nums[i-1];
        }
        vector<int> m1(n,1);
        for(int i=n-1;i>=0;i--){
            if(i!=n-1){
            m1[i]=m1[i+1]*nums[i+1];
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(m[i]*m1[i]);
        }
        return ans;
        
    }
};