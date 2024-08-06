class NumArray {
public:
    vector<int>prefsum;
    NumArray(vector<int>& nums) {
        prefsum.resize(nums.size()+2,0);
        for(int i=0;i<nums.size();i++){
            prefsum[i+1]=prefsum[i]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefsum[right+1]-prefsum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */