class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[n-1];
        int count=0;
        for(int i=0;i<min(s1.length(),s2.length());i++){
            if(s1[i]==s2[i]){
                count++;
            }
            else{
                break;
            }
        }
        return s1.substr(0,count);
        
    }
};