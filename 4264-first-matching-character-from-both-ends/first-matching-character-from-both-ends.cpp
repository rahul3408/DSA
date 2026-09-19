class Solution {
public:
    int firstMatchingIndex(string s) {
        int n=s.length();
        int ans=s.length();
        int count=0;
        for(int i=0;i<s.length();i++){
                if(s[i]==s[n-i-1]){
                    ans=min(ans,i);
                    count++;
                }
        }
        if(count!=0){
        return ans;
        }
        else{
        return -1;
        }
    }
    
};