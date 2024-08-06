class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        int l=1,r=1;
        for(int i=0;i<nums.size();i++){
            l==0?l=1:l;
            r==0?r=1:r;
            if(((l*1LL*nums[i])<=INT_MAX)&&((l*1LL*nums[i])>=INT_MIN))
                l*=nums[i];
            if(((r*1LL*nums[i])<=INT_MAX)&&((r*1LL*nums[i])>=INT_MIN))
                r*=nums[nums.size()-i-1];
            ans=max({l,r,ans});
        }
        return ans;
    }
};