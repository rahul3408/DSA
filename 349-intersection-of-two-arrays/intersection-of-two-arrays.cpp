class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> s1;
        unordered_set<int> s2;
        for(int val:nums1){
            s1.insert(val);
        }
        for(int val:nums2){
            s2.insert(val);
        }        
        for(int val:s1){
            if(s2.find(val)!=s2.end()){
                ans.push_back(val);
            }
        }
        return ans;
    }
};