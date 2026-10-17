class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3!=0){
                int temp=nums[i];
                int c1=0,c2=0;
                while(temp%3!=0){
                    temp--;
                    c1++;
                }
                temp=nums[i];
                while(temp%3!=0){
                    temp++;
                    c2++;
                }
                count+=min(c1,c2);
            }
        }
        return count;
        
    }
};