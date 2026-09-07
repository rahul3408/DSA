class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int dig;
        for(int val:nums){
            if(val<=9){
                ans.push_back(val);
            }
            else{
            string s=to_string(val);
            for(int i=0;i<s.length();i++){
                ans.push_back(s[i]-'0');
            }
            }
        }
        return ans;
        
    }
};