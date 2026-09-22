class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int max1=INT_MIN;
       int sum=0;
        for(int j=0;j<nums.size();j++){
            sum=sum+nums[j];
            max1=max(max1,sum);
            if(sum<0){
                sum=0;
            }
            
        }
        return max1;
          
        
    }
};