class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
    string ans;
    long long n=shifts.size();
    vector<long long > suf(n);
    suf[n-1]=shifts[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]+shifts[i];
    }
    for(int i=0;i<n;i++){
        ans.push_back(((s[i]-'a')+suf[i])%26+'a');
    }
    return ans;
        
    }
};