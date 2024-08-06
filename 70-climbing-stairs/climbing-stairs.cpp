class Solution {
public:
    int climbStairs(int n) {
        int one=1,two=1,ans=1;
        for(int i=2;i<=n;i++){
            ans=one+two;
            one=two;
            two=ans;
        }
        return ans;

    }
};