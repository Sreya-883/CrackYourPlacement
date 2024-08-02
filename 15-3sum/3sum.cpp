class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>s;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0) {s.insert({nums[i],nums[j],nums[k]}); j++;}
                else if(nums[i]+nums[j]+nums[k]>0) k--;
                else j++;
            }
        }
        ans.assign(s.begin(),s.end());
        return ans;
    }
};