class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=1;
        int j=arr.size()-2;
        int mid;
        while(i<=j){
            mid=(i+j)/2;
            if(arr[mid-1]<arr[mid]&&arr[mid+1]<arr[mid]){
                return mid;
            }
            else if(arr[mid+1]>arr[mid]){
              i=mid+1;
            }
            else if(arr[mid-1]>arr[mid]){
               j=mid-1;
            }
        }
        return mid;
    }
};