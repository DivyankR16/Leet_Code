class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        int maxx=INT_MAX;
        // memset(dp,max,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i]=maxx;
        }
        dp[0]=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<=min(1000,i);j++){
                if(nums[i-j]>=j){
                   dp[i]=min(dp[i],dp[i-j]+1);
                }
            }
        }
        return dp[n-1];
    }
};