class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heights1=heights;
        sort(heights1.begin(),heights1.end());
        int  count=0;
        int n=heights.size();
        for(int i=0;i<n;i++){
            if(heights1[i]!=heights[i]){
                count++;
            }
        }
        return count;
        
    }
};