class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> h;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
          h[nums[i]]++;
        }
        vector<vector<int>> buc(n+1);
        for(auto k:h){
            buc[k.second].push_back(k.first);
        }
        for(int i=1;i<=n;i++){
            sort(buc[i].begin(),buc[i].end(),greater<int>());
        }
        for(int i=1;i<=n;i++){
            for(int j:buc[i]){
                for(int b=0;b<i;b++){
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};