class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0,k=nums.size()-1;
        while(j<=k&&j<nums.size()){
            if(nums[j]==0){
             swap(nums[i],nums[j]);
             i++;
             if(nums[j]==0)j++;
            }
            else if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else
             j++;
        }
    }
};
