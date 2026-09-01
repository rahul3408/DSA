class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int mi=INT_MAX;
        int ma=INT_MIN;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]>ma){
                ma=nums[i];
            }
            if(nums[i]<mi){
                mi=nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        int i=0;
        for(int j=mi;j<=ma;j++){
            if(j==nums[i]){
                i++;
            }
            else{
                ans.push_back(j);
            }
        }
        return ans;
       

        
    }
};