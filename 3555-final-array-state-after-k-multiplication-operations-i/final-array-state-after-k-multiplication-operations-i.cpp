class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int x;
            int min1=INT_MAX;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<min1){
                    min1=nums[j];
                    x=j;
                }
            }
            nums[x]=nums[x]*multiplier;
        }
        return nums;
        
    }
};