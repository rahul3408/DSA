class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> m={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> ans;
        for(string s:words){
            string b;
            for(int i=0;i<s.length();i++){
               b=b+m[s[i]-'a'];
            }
            ans.insert(b);
        }
        int count=ans.size();
        
        
        return count;
    }
};