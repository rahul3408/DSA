class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m=flowerbed.size();
        bool flag;
        if(n==0){
            return true;
        }
        if(m==1){
            if(flowerbed[0]==0){
                return true;
            }
            else{
                return false;
            }
        }
        while(n!=0){
            flag=false;
            for(int i=0;i<m;i++){
                if(i==0){
                    if(flowerbed[i]==0&&flowerbed[i+1]==0){
                        flowerbed[i]=1;
                        n--;
                        flag=true;
                        break;
                    }
                }
                else if(i==m-1){
                    if(flowerbed[i]==0&&flowerbed[i-1]==0){
                        flowerbed[i]=1;
                        n--;
                        flag=true;
                        break;
                    }
                }
                else{
                    if(flowerbed[i]==0&&flowerbed[i+1]==0&&flowerbed[i-1]==0){
                        flowerbed[i]=1;
                        n--;
                        flag=true;
                        break;
                    }
                }
            }
            if(flag==false){
                return false;
            }
        }
        return true;
    }

};