class Solution {
public:
vector<int>a;
// vector<vector<int>>memo;
// bool recur(int index,int n,int sum1,int sum2){
//     if(index==n){
//         if(sum1==sum2){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     if(memo[index][sum1]!=-1){
//         return memo[index][sum1];
//     }
//     bool ans=false;
//     ans |= recur(index+1,n,sum1+a[index],sum2-a[index]);
//     ans |= recur(index+1,n,sum1,sum2);
//     return memo[index][sum1]=ans;
// }
bool topDown(int sum2){
    int n=a.size();
    bool dp[n+1][sum2+1];
    for(int i=0;i<=sum2;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=n;i++){
       dp[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum2;j++){
            dp[i][j]=dp[i-1][j];
            if(j-a[i-1]>=0){
                dp[i][j] |=dp[i-1][j-a[i-1]];
            }
        }
    }
    return dp[n][sum2];
}
    bool canPartition(vector<int>& a) {
        this->a=a;
        int n=a.size();
        // int sum=200*100;
        // this->memo.resize(n,vector<int>(sum+1,-1));
        int sum2=0;
        for(int i=0;i<n;i++){
            sum2+=a[i];
        }
        if(sum2%2==1)return 0;
        return topDown(sum2/2);
        // return recur(0,n,0,sum2);
    }
};