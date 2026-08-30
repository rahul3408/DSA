class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        vector<int> nums3;
        while(i<j){
            if(nums[i]+nums[j]==target){
                nums3.push_back(i+1);
                nums3.push_back(j+1);
                return nums3;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else{
                j--;
            }
        }
        return nums3;
    }
};