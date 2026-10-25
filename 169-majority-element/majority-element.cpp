class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
              m[nums[i]]++;
            }
            m.insert({nums[i],1});
        }
        for(auto v:m){
            if(v.second>nums.size()/2){
                return v.first;
            }
        }
        return 0;
    }
};