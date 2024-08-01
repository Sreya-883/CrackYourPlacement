class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profmax=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]) profmax+=prices[i]-prices[i-1];
        }
        return profmax;
    }
};