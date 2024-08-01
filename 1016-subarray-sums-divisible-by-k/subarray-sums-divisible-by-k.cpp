class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,n=nums.size(),sum=0;
        unordered_map<int,int>ump;
        ump[0]++;
        for(int i=0;i<n;i++){
            sum=(sum+nums[i])%k;
            if(sum<0)sum+=k;
            ans+=ump[sum%k];
            ump[sum%k]++;
        }
        return ans;
    }
};