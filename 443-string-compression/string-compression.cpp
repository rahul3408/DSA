class Solution {
public:
    int compress(vector<char>& chars) {
        int count=0;
        int idx=0;
        int n=chars.size();
        for(int i=0;i<chars.size()-1;i++){
            if(chars[i]!=chars[i+1]){
              chars[idx++]=chars[i];
              if(count!=0){
                string t=to_string(count+1);
                for(char ch:t){
                chars[idx++]=ch;
                }
              }
              count=0;
            }
            else{
              count++;
            }
        }
        chars[idx++]=chars[n-1];
        if(count!=0){
        string t=to_string(count+1);
        for(char ch:t){
        chars[idx++]=ch;
        }
        }
        chars.erase(chars.begin()+idx,chars.end());
        return chars.size();
    }
};