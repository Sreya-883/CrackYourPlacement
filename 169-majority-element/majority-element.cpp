class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int me=nums[0],c=0;
        for(int x:nums){
            if(c==0){
                me=x;
            }
            if(x==me){
                c++;
            }else{
                c--;
            }
        }
        return me;
    }
};