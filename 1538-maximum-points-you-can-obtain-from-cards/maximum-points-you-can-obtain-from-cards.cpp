class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int pre[k+1];
        pre[0]=cardPoints[0];
        for(int i=1;i<k;i++){
            pre[i]=pre[i-1]+cardPoints[i];
        }
        int suf[k+1];
        int n=cardPoints.size();
        suf[k-1]=cardPoints[n-1];
        for(int j=k-2,l=n-2;j>=0;j--,l--){
            suf[j]=suf[j+1]+cardPoints[l];
        }
        int ans=max(pre[k-1],suf[0]),i=0,j=k-1;
        while(k-->1){
            ans=max({ans,pre[i]+suf[i+1],pre[j-1]+suf[j]});
            i++;j--;
        }
        return ans;
    }
};