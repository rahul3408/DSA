class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int count1=0;
        int count2=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                count1++;
            }
            else if(nums[i]<nums[i+1]){
                count2++;
            }
            else{
                count1++;
                count2++;
            }
        }
        if(count1==(n-1)||count2==(n-1)){
            return true;
        }
        return false;
        
    }
};