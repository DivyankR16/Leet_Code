class Solution {
public:
    bool fill(string &s,int i,int j,vector<vector<int>>&paldp){
        if(i>=j){
            return true;
        }
        if(paldp[i][j]!=-1){
            return paldp[i][j];
        }
        if(s[i]==s[j]){
            return paldp[i][j]=fill(s,i+1,j-1,paldp);
        }
        else{
            return paldp[i][j]=false;
        }
    }
    int minCut(string s) {
        int n=s.size();
        vector<vector<int>>paldp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                fill(s,i,j,paldp);
            }
        }

        vector<int>dp(n+1,INT_MAX);
        dp[n]=0;
        for(int i=n-1;i>=0;i--){
            int cuts=INT_MAX;
            for(int j=i;j<n;j++){
                if(paldp[i][j]){
                    cuts=min(cuts,1+dp[j+1]);
                }
            }
            dp[i]=cuts;
        }
        return dp[0]-1;
    }
};