class Solution {
public:
    int maxDistinct(string s) {
        int n=s.length();
        int hash[26];
        for(int i=0;i<26;i++){
            hash[i]=0;
        }
        for(int i=0;i<n;i++){
           hash[s[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(hash[i]>0){
                count++;
            }
        }

        return count;
    }
};