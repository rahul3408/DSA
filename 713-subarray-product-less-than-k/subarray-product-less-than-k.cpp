class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int i=0;
        int count=0;
        int pro=1;
        int n=nums.size();
        for(int j=0;j<n;j++){
            pro=pro*nums[j];
            while(pro>=k){
                pro=pro/nums[i];
                i++;
            }
            count=count+(j-i+1);
        }
        return count;
        
        
    }
};