class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        int count=0;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else if(s[i]!=s[j]){
              int i1=i+1;
              int j1=j;
              bool p=true;
              bool p1=true;
              while(i1<j1){
                if(s[i1]==s[j1]){
                    i1++;
                    j1--;
                }
                else{
                    p=false;
                    break;
                }
              }
                int i2=i;
                int j2=j-1;
                while(i2<j2){
                    if(s[i2]==s[j2]){
                        i2++;
                        j2--;
                    }
                    else{
                        p1=false;
                        break;
                    }
                }
                if(p==true||p1==true){
                  return true;
                } 
                else{
                    return false;
                }
            }
        }
        return true;
    }
};