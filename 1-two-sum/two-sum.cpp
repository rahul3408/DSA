class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> nums2=nums;
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=n-1;
        vector<int> nums3;
        while(i<j){
            if(nums2[i]+nums2[j]==target){
                nums3.push_back(nums2[i]);
                nums3.push_back(nums2[j]);
                break;
            }
            else if(nums2[i]+nums2[j]<target){
                i++;
            }
            else{
                j--;
            }
        }
        vector<int> nums5;
        int x=nums3[0];
        int y=nums3[1];
        for(int k=0;k<n;k++){
            if(nums[k]==x){
              nums5.push_back(k);
            }
            else if(nums[k]==y){
              nums5.push_back(k);
            }
        }
        return nums5;
        
    }

};
