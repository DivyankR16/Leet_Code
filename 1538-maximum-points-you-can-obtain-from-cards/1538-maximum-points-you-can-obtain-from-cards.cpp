class Solution {
public:
    int maxScore(vector<int>& a, int k) {
       int n=a.size();
       int suff[n+1];
       suff[n]=0;
       for(int i=n-1;i>=0;i--){
        if(i==n-1){
            suff[i]=a[i];
        }
        else{
            suff[i]=suff[i+1]+a[i];
        }
       }
       int ans=0;
       int sum=0;
       for(int i=0;i<=k;i++){
        ans=max(ans,sum+suff[n-k+i]);
        sum+=a[i];
       }
       return ans;
    }
};