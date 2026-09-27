class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum=0;
        for(int j=0;j<s.length();j++){
            for(int i=0;i<t.length();i++){
                if(s[j]==t[i]){
                    sum=sum+abs(j-i);
                }
            }
        }
        return sum;
        
    }
};