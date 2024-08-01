class Solution {
public:
vector<vector<int>>memo;
    bool solver(int i,int j,string &s,string &p){
        if(j==p.size()){
            return i==s.size();
        }
        if(i==s.size()){
             if(p[j]=='*'){
                return memo[i][j]=solver(i,j+1,s,p);
             }
             else{
                return false;
             }
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        bool ans=false;
        if(p[j]=='?'){
            ans|=solver(i+1,j+1,s,p);
        }
        else if(p[j]!='*'){
            ans|=(p[j]==s[i] && solver(i+1,j+1,s,p));
        }
        else{
            // for(int k=i;k<=s.size();k++){
            //     ans|=solver(k,j+1,s,p);
            // }
            ans|=solver(i,j+1,s,p);
            ans|=solver(i+1,j,s,p);
        }
        return memo[i][j]=ans;
    }
    bool isMatch(string &s, string &p) {
        memo.assign(s.size()+1,vector<int>(p.size()+1,-1));
        return solver(0,0,s,p);
    }
};