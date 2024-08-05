class Solution {
public:
    vector<vector<int>>memo;
    int solver(int i,int n,bool prev,vector<int>&a){
        if(i==n){
            return 0;
        }
        if(memo[i][prev]!=-1){
            return memo[i][prev];
        }
        int ans1=0;
        int ans2=0;
        if(!prev){
            ans1+=solver(i+1,n,true,a)+a[i];
            ans2+=solver(i+1,n,false,a);
        }
        else{
            ans2+=solver(i+1,n,false,a);
        }
        return memo[i][prev]=max(ans1,ans2);
    } 
    int rob(vector<int>& a) {
        memo.assign(a.size(),vector<int>(2,-1));
        return solver(0,a.size(),false,a);
    }
};