class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int ind;
        int longlen=INT_MIN;
        for(int i=0;i<s.length();i++){
           int odd=pali(s,i,i);
           int even=pali(s,i,i+1);
           int len=max(odd,even);
           if(len>longlen){
            longlen=len;
            ind=i;
           }
        }
        int start=ind-((longlen-1)/2);
        ans=s.substr(start,longlen);
        return ans;
        
    }

    int pali(string t,int l,int r){
        while(l>=0&&r<=t.length()-1&&t[l]==t[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
};