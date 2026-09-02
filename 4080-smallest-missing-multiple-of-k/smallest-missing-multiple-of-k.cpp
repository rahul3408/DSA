class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        int max1=INT_MIN;
        int count2=0;
        for(int j=k;j<=k*n;j=j+k){
            int count=0;
             for(int i=0;i<n;i++){
              if(nums[i]==j){
                  count++;
                  count2++;
                  max1=max(max1,j);
              }
            }
            if(count==0){
                return j;
            }
        }
        if(count2==0){
            return k;
        }
        return max1+k;
        
        
    }
};