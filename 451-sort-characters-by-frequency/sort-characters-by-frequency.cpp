class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> h;
        for(char ch:s){
            h[ch]++;
        }
        int n=s.length();
        vector<vector<char>> buc(n+1);
        for(auto k:h){
            buc[k.second].push_back(k.first);
        }
        string ans;
        for(int i=n;i>0;i--){
            for(char ch:buc[i]){
                ans.append(i,ch);
            }
        }
        return ans;
    }
};