class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        int i=0;
        int j=0;
        while(s[i]!='\0'){
            if(isalnum(s[i])){
             s2.push_back(tolower(s[i]));
             j++;
            }
            i++;
        }
        int n=j;
        int count=0;
        for(int i=0;i<n;i++){
            if(s2[i]==s2[n-i-1]){
                count++;
            }
        }
        if(count==n){
            return true;
        }
        else{
            return false;
        }
    }
};