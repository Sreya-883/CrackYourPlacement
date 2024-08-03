class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int k=j+1,l=n-1;
                long long t=target+0LL-nums[i]-nums[j];
                while(k<l){
                  if(nums[k]+0LL+nums[l]==t){
                    ans.insert({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                  }else if(nums[k]+0LL+nums[l]<t){
                    k++;
                  }else{
                    l--;
                  }
                }
            }
        }
        // auto it=unique(ans.begin(),ans.end());
        // ans.resize(distance(ans.begin(),it));
        vector<vector<int>>vecans;
        vecans.assign(ans.begin(),ans.end());
        return vecans;
    }
};