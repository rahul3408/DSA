class Solution {
public:
#rahul
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int count=n;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(baskets[j]>=fruits[i]&&arr[j]==0){
                  count--;
                  arr[j]++;
                  break;
                }
            }
        }
        return count;
        
    }
};
