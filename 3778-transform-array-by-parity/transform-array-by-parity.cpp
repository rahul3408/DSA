class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int zc=0;
        int oc=0;
        for(int val:nums){
            if(val%2==0){
                val=0;
                zc++;
            }
            else{
                val=1;
                oc++;
            }
        }
        int i=0;
        for(int j=0;j<zc;j++){
            nums[i++]=0;
        }
         for(int j=0;j<oc;j++){
            nums[i++]=1;
        }
        return nums;


        
        
    }
};