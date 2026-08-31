class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int h;
        int w;
        int area;
        int max1=-1;
        while(i<j){
            h=min(height[i],height[j]);
            w=j-i;
            area=h*w;
            max1=max(area,max1);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return max1;
    }
};