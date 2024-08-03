class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       int ans=0;
       unordered_map<int,int>mp;
       mp[0]++;
       int sum=0;
       for(int x:nums){
            sum+=x;
            ans+=mp[sum-k];
            mp[sum]++;
       }
       return ans; 
    }
};