class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
    int i=0;
    for(int j=0;j<n;j++){
      if(nums[j]!=0){
        int temp=nums[j];
        nums[j]=nums[i];
        nums[i]=temp;
        i++;
      }
    }  
    /*a;ternate
        int n = nums.size();
        int index = 0; 
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[index++] = nums[i];
            }
        }
        while (index < n) {
            nums[index++] = 0;
        }
        */
        
    }
};