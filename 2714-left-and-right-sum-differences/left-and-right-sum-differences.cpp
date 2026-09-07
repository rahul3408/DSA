class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> l(0,n);
        vector<int> r(0,n);
        vector<int> ans;
        int diff;
        for(int i=0;i<n;i++){
            int sum1=0;
            int sum2=0;
            for(int j=0;j<i;j++){
                sum1=sum1+nums[j];
            }
            for(int k=i+1;k<n;k++){
                sum2=sum2+nums[k];
            }
            l.push_back(sum1);
            r.push_back(sum2);
            diff=sum1-sum2;
            if(diff>0){
                ans.push_back(diff);
            }
            else{
                ans.push_back(-diff);
            }
        }
        
        return ans;
        
    }
};