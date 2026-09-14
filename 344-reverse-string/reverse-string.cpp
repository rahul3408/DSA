class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> s2(s.size(),' ');
        for(int i=0;i<s.size();i++){
            s2[i]=s[s.size()-i-1];
        }
        for(int i=0;i<s.size();i++){
            s[i]=s2[i];
        }
        
    }
};