class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto val:operations){
            if(val=="--X"){
              --x;
            }
            else if(val=="X--"){
                x--;
            }
            else if(val=="X++"){
                x++;
            }
            else if(val=="++X"){
                ++x;
            }
        }
        return x;
        
    }
};