class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minel=prices[0],maxprof=0;
        for(int x:prices){
            maxprof=max(maxprof,x-minel);
            minel=min(minel,x);
        }
        return maxprof;
    }
};