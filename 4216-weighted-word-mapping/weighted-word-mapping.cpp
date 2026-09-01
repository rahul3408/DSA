class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string s;
        for(auto val:words){
            int i=0;
            int sum=0;
            while(val[i]!='\0'){
                sum=sum+weights[val[i]-'a'];
                i++;
            }
            int result=sum%26;
            char ch='z'-result;
            s.push_back(ch);
        }
        return s;
        
    }
};