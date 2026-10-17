class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int val:nums){
          sum+=val;
        }
        if(sum%k==0){
            return 0;
        }
        else{
            int sum1=sum;
            while(sum1%k!=0){
                sum1--;
            }
            return sum-sum1;
        }
        
    }
};