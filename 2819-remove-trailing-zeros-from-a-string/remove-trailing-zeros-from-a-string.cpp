class Solution {
public:
    string removeTrailingZeros(string num) {
        string temp;
        int n=num.size();
        int c=0;
        int s=n-1;
        while(num[s]=='0'){
            c++;
            s--;
        }
        if(c==0){
            return num;
        }
        for(int i=0;i<n-c;i++){
            temp.push_back(num[i]);
        }
        return temp;
        
    }
};