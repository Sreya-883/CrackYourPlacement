class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxans=0;
        while(i<j){
            maxans=max(maxans,min(height[j],height[i])*(j-i));
            if(height[i]>height[j]) j--;
            else i++;
        }
        return maxans;
    }
};