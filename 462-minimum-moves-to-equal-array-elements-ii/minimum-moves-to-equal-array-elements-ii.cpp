class Solution {
public:
    int minMoves2(vector<int>& nums) {
      int median=0,n=nums.size();
      sort(nums.begin(),nums.end());
      median=nums[n/2];
      int ans=0;
      for(int x:nums) ans+=abs(x-median);
      return ans;
    }
};