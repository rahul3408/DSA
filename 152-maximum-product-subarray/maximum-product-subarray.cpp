class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
            int ans=INT_MIN;
            int p=1;
            int s=1;
            int ans1=INT_MIN;
            int ans2=INT_MIN;
            for(int r=0;r<n;r++){
              if(p==0){
                p=1;
              }
              p=p*nums[r];
              ans1=max(ans1,p);

            }
            for(int r=n-1;r>=0;r--){
                if(s==0){
                    s=1;
                }
                s=s*nums[r];
                ans2=max(ans2,s);
            }
            ans=max(ans1,ans2);
            return ans;
        
    }
};