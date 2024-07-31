class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        while(i<n&&j<n){
            while(j<n&&nums[j]==0) j++;
            if(j<n) nums[i++]=nums[j++];
        }
        while(i<n) nums[i++]=0;
    }
};