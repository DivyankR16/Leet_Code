class Solution {
public:
    int rob(vector<int>& a) {
        int n=a.size();
        vector<vector<int>>dp;
        dp.assign(n+1,vector<int>(2,0));
        dp[0][0]=0;
        dp[0][1]=0;
        for(int i=1;i<=n;i++){
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
            dp[i][1]=dp[i-1][0]+a[i-1];
        }
        return max(dp[n][0],dp[n][1]);
}
};