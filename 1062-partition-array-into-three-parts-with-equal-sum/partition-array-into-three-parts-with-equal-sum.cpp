class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int val:arr){
            sum+=val;
        }
        if(sum%3!=0){
            return false;
        }
        int cs=0;
        int t=sum/3;
        int count=0;
        for(int i=0;i<arr.size();i++){
           cs+=arr[i];
           if(cs==t){
            cs=0;
            count++;
           }
        }
        if(count>=3){
            return true;
        }
        else{
            return false;
        }
    }
};