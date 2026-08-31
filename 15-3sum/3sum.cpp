class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums2=nums;
        sort(nums2.begin(),nums2.end());
        vector<vector<int>> nums3;
        for(int i=0;i<n-2;i++){
          if(i>0&&nums2[i]==nums2[i-1]){
            continue;
          }
          int j=i+1;
          int k=n-1;
          while(j<k){
            if(nums2[i]+nums2[j]+nums2[k]==0){
                nums3.push_back({nums2[i],nums2[j],nums2[k]});
                while(j<k&& nums2[j]==nums2[j+1]){
                    j++;
                }
                while(j<k&& nums2[k]==nums2[k-1]){
                    k--;
                }
                j++;
                k--;
            }
            else if(nums2[i]+nums2[j]+nums2[k]>0){
                k--;
            }
            else{
                j++;
            }
          }
          
        }
        return nums3;


        
    }
};