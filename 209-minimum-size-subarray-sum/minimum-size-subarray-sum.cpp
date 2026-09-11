class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int min1=n+1;
        int sum=0;
        int i=0;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            while(sum>=target){
                min1=min(min1,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        if(min1==n+1){
            return 0;
        }
        else{
        return min1;
        }
        
    }
};