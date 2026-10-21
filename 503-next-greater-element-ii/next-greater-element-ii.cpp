class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> temp(nums);
        for(int val:nums){
            temp.push_back(val);
        }
        stack<int> s;
        vector<int> ans(temp.size(),-1);
        for(int i=temp.size()-1;i>=0;i--){
            while(!s.empty()&&s.top()<=temp[i]){
                s.pop();
            }
            if(!s.empty()){
                ans[i]=s.top();
                s.push(temp[i]);
            }
            s.push(temp[i]);
        }
        vector<int> ans2;
        for(int i=0;i<temp.size()/2;i++){
            ans2.push_back(ans[i]);
        }
        return ans2;
        
    }
};