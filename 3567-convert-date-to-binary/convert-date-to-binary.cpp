class Solution {
public:
    string convertDateToBinary(string date) {
        int y=stoi(date.substr(0,4));
        int m=stoi(date.substr(5,2));
        int d=stoi(date.substr(8,2));
        string ans;
        string s1=bi(y);
        ans.append(s1);
        ans.push_back('-');
        string s2=bi(m);
        ans.append(s2);
        ans.push_back('-');
        string s3=bi(d);
        ans.append(s3);

        return ans;
    }

    string bi(int x){
        string h;
        int rem;
        while(x>0){
            rem=x%2;
            x=x/2;
            h.append(to_string(rem));
        }
        reverse(h.begin(),h.end());
        return h;
    }
    
};