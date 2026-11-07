class Solution {
public:
    bool isSubsequence(string s, string t) {
      int j=0;
      int i=0;
      while(i<t.length()&&j<s.length()){
        if(s[j]==t[i]){
            j++;
        }
        i++;
      }
      if(j==s.length()){
        return true;
      }
      else{
        return false;
      }
    }
};