class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zc=0;
        int oc=0;
        int tc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zc++;
            }
            else if(nums[i]==1){
                oc++;
            }
            else{
                tc++;
            }
        }
        int k=0;
        while(zc!=0){
           nums[k++]=0;
           zc--;
        }
        while(oc!=0){
           nums[k++]=1;
           oc--;
        }
        while(tc!=0){
           nums[k++]=2;
           tc--;
        }
        
        
    }
};