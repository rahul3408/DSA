class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        int x;
        if(ruleKey=="type"){
            x=0;
        }   
        else if(ruleKey=="color"){
            x=1;
        }
        else{
            x=2;
        }
            for(vector<string> val:items){
                if(val[x]==ruleValue){
                  count++;
                }
            }
        
        return count;
    }
};