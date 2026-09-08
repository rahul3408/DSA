class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max1=0;
        for(string val:sentences){
            int count1=1+count(val.begin(),val.end(),' ');
            max1=max(count1,max1);
        }
        return max1;
        
    }
};