class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> nums2=nums;
        vector<int> nums3=nums;
        sort(nums3.begin(),nums3.end());
        sort(nums2.begin(),nums2.end(),greater<int>());
        if(nums==nums2||nums==nums3){
            return true;
        }
        else{
            return false;
        }
        
    }
};