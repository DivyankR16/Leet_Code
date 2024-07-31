class Solution {
public:
    vector<vector<int>>memo;
    bool solver(int i,int j,string &s,string &p){
        if(j==p.size()){
            if(i==s.size()){
                return true;
            }
            return false;
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        bool pos=false;
        if(i<s.size() && (s[i]==p[j] || p[j]=='.')){
            pos=true;
        }
        bool ans=false;
        if(j+1<p.size() && p[j+1]=='*'){
            ans|= pos && solver(i+1,j,s,p);
            ans|=solver(i,j+2,s,p);
        }
        else{
            ans|=pos && solver(i+1,j+1,s,p);
        }
        return memo[i][j]=ans;
    }
    bool isMatch(string &s, string &p) {
        memo.assign(s.size()+1,vector<int>(p.size()+1,-1));
        return solver(0,0,s,p);
    }
};