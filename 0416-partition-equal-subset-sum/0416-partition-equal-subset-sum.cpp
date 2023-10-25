class Solution {
public:
vector<int>a;
vector<vector<int>>memo;
bool recur(int index,int n,int sum1,int sum2){
    if(index==n){
        if(sum1==sum2){
            return true;
        }
        else{
            return false;
        }
    }
    if(memo[index][sum1]!=-1){
        return memo[index][sum1];
    }
    bool ans=false;
    ans |= recur(index+1,n,sum1+a[index],sum2-a[index]);
    ans |= recur(index+1,n,sum1,sum2);
    return memo[index][sum1]=ans;
}
    bool canPartition(vector<int>& a) {
        this->a=a;
        int n=a.size();
        int sum=200*100;
        this->memo.resize(n,vector<int>(sum+1,-1));
        int sum2=0;
        for(int i=0;i<n;i++){
            sum2+=a[i];
        }
        return recur(0,n,0,sum2);
    }
};