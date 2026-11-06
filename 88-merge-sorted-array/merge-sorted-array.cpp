class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int x=0;
        while(i<(m+n)&&j<n){
        if(x>=m){
            nums1[i++]=nums2[j++];
        }
        else if(nums2[j]<nums1[i]){
           for(int k=m+n-1;k>i;k--){
            nums1[k]=nums1[k-1];
           }
           nums1[i++]=nums2[j++];
        }
        else{
            i++;
            x++;
        }  
        }
        
        
        
    }
};