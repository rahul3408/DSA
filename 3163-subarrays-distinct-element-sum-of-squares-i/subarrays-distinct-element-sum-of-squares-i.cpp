class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            vector<int> temp;
            for(int j=i;j<nums.size();j++){
                temp.push_back(nums[j]);
                count=temp.size();
                sort(temp.begin(),temp.end());
                for(int k=0;k<temp.size()-1;k++){
                    if(temp[k]==temp[k+1]){
                        count--;
                    }
                }
                ans+=count*count;
            }
        }
        return ans;
        
    }
};