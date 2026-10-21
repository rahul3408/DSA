class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l=0;
        long long sum=0;
        long long ans=0;
        unordered_map<int,int> s;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            if(s.find(nums[r])!=s.end()){
                s[nums[r]]++;
            }
            else{
                s.insert({nums[r],1});
            }
            if(r-l+1==k){
              if(s.size()==k){
              ans=max(ans,sum);
              }
              s[nums[l]]--;
              if(s[nums[l]]==0){
                s.erase(nums[l]);
              }
              sum=sum-nums[l];
              l++;
            }
        }
        return ans;
        
    }
};