class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int max1=0;
        int i=0;
        unordered_map<int,int> hash;
        for(int j=0;j<n;j++){
            hash[fruits[j]]++;
                while(hash.size()>2){
                    hash[fruits[i]]--;
                    if(hash[fruits[i]]==0){
                        hash.erase(fruits[i]);
                    }
                    i++;
                }
            
                max1=max(max1,j-i+1);
            
        }
        return max1;
        
        
    }
};