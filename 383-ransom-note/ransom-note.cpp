class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> h1;
        unordered_map<char,int> h2;
        for(char ch:ransomNote){
            h1[ch]++;
        }
        for(char ch:magazine){
            h2[ch]++;
        }
        for(auto k:h1){
            if(h2.find(k.first)==h2.end()||h2[k.first]<k.second){
               return false;
            }
        }
        return true;
    }
};