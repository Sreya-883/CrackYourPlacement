class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int i=0,j=0,n=nums.size();
        for(i=0;i<n&&j<n;){
            int k=j;
            while(j<n&&(nums[k]==nums[j])) j++;
            i++;
            if(i<n&&j<n) nums[i]=nums[j];
        }
        return i;
    }
};
