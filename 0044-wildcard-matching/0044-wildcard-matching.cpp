class Solution {
public:
    bool isMatch(string &s, string &p) {
        vector<vector<bool>>dp(s.size()+1,vector<bool>(p.size()+1,0));
        dp[0][0]=1;
        int n=s.size();
        int m=p.size();
        bool ck=1;
        for(int i=1;i<=m;i++){
            ck=ck && (p[i-1]=='*');
            dp[0][i]=ck;
        }
       for(int j=1;j<=m;j++){
        for(int i=1;i<=n;i++){
            if(p[j-1]=='?' || p[j-1]==s[i-1]){
                dp[i][j]=dp[i][j] || dp[i-1][j-1];
            }
            else{
                if(p[j-1]=='*'){
                dp[i][j]=dp[i][j] || dp[i-1][j];
                dp[i][j]=dp[i][j] || dp[i][j-1];
                }
            }
        }
       }
       return dp[n][m];
    }
};