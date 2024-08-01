class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int x=1e6;
        for(int i=0;i<nums.size();i++){
            nums[(nums[i]-1)%x]+=x;
        }
        vector<int>dups;
        for(int i=0;i<nums.size();i++){
            if((nums[i]/x)>1) dups.push_back(i+1);
        }
        return dups;
    }
};