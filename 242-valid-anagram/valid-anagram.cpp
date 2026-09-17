class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int hash1[26];
        int hash2[26];
        for(int i=0;i<s.length();i++){
            hash1[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            hash2[t[i]-'a']++;
        }
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<26;i++){
            if(hash1[i]!=hash2[i]){
                return false;
            }
        }
        return true;
            
        }
};