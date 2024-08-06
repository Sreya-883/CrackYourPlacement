class Solution {
public:
    int dp[601][101][101];
    int solve(vector<string>& strs,int i, int m, int n){
      if(dp[i][m][n]!=-1) return dp[i][m][n];
      if(i==strs.size()) return 0;
      int z=0,o=0;
      for(char ch:strs[i]) (ch=='1')?o++:z++;
      int ans=0;
      if(m>=z&&n>=o)
        ans=solve(strs,i+1,m-z,n-o)+1;
      ans=max(ans,solve(strs,i+1,m,n));
      return dp[i][m][n]=ans;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(strs,0,m,n);
    }
};