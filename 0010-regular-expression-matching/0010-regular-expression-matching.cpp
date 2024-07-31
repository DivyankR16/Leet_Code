class Solution {
public:
    bool solver(int i,int j,string &s,string &p){
        if(j==p.size()){
            if(i==s.size()){
                return true;
            }
            return false;
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
        return ans;
    }
    bool isMatch(string &s, string &p) {
        return solver(0,0,s,p);
    }
};