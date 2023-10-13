class Solution {
public:
    int minCostClimbingStairs(vector<int>& a) {
        int n=a.size();
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<=n;i++){
            if(i==n){
                dp[i]+=min(dp[i-1]+a[i-1],dp[i-2]+a[i-2]);
            }
            else{
            dp[i]+=min(dp[i-1]+a[i-1],dp[i-2]+a[i-2]);
            }
        }
        return dp[n];
    }
};