class Solution {
public:
    string reverseByType(string s) {
        string s1;
        string s2;
        string p;
        string spe="!@#$%^&*()";
        for(int i=0;i<s.length();i++){
            p=s[i];
            if(spe.find(p)!=string::npos){
                s2.append(p);
            }
            else{
                s1.append(p);
            }
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        string ans;
        int k=0;
        int j=0;
        for(int i=0;i<s.length();i++){
            p=s[i];
            if(spe.find(p)!=string::npos){
                ans.push_back(s2[k++]);
            }
            else{
                ans.push_back(s1[j++]);
            }
        }
        return ans;
        
    }
};