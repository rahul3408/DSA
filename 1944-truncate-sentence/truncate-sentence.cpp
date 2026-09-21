class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.length();
        int count=0;
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                count++;
             if(count==k){
              ans=s.substr(0,i);
              return ans;
            }
        }
        }
        return s;
        
        
    }
};