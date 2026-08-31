class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max1=INT_MIN;
        int n=candies.size();
        for(int i=0;i<n;i++){
            if(candies[i]>max1){
                max1=candies[i];
            }
        }
    vector<bool> ans;
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=max1){
               ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        } 
        return ans;
    }
    
};