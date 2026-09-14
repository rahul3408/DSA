class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
            }
            else if(!isalnum(s[j])){
              j--;
            }
            else{
            char a=tolower(s[i]);
            char b=tolower(s[j]);
            if(a!=b){
                return false;
            }
            else{
                i++;
                j--;
            }
            }
        }
        return true;
    }
};