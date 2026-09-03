class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==j){
                j++;
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        
        return ans;
        
    }
};