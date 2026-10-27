class Solution {
public:
    int countSubstrings(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            int odd=pali(s,i,i);
            int even=pali(s,i,i+1);
            sum+=odd+even;
        }
        return sum;
    }

    int pali(string s,int l,int r){
        int count=0;
        while(l>=0&&r<=s.length()-1&&s[l]==s[r]){
            l--;
            r++;
            count++;
        }
        return count;
    }
};