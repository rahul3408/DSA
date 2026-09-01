class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int dig=0;
        int count=0;
        for(int val:nums){
            while(val>0){
                dig=val%10;
                if(dig==digit){
                    count++;
                }
                val=val/10;
            }
        }
        return count;
        
    }
};