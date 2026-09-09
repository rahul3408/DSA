class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int max1=-1;
        int n=nums.size();
        int countzero=0;
        for(int j=0;j<n;j++){
            if(nums[j]==0){
                countzero++;
            }
            while(countzero>k){
                if(nums[i]==0){
                    countzero--;
                }
                i++;
            }
            max1=max(max1,j-i+1);
        }
        return max1;
        
    }
};