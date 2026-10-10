class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       int l=0;
       vector<int> hash1(26,0);
       for(int i=0;i<p.length();i++){
        hash1[p[i]-'a']++;
       }
       vector<int> ans;
       vector<int> hash2(26,0);
       for(int r=0;r<s.length();r++){
          hash2[s[r]-'a']++;
          if(r-l+1==p.length()){
            if(hash2==hash1){
                ans.push_back(l);
                hash2[s[l]-'a']--;
                l++;
            }
            else{
                hash2[s[l]-'a']--;
                l++;
            }
          }
       }
       return ans;
        
    }
};