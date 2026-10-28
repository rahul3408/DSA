class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int max1=0;
        for(int i=0;i<n;i++){
          if(nums[i]==1){
            count++;
          }
          else{
            max1=max(count,max1);
            count=0;
          }
        }
        max1=max(count,max1);
        return max1;
        
    }
};