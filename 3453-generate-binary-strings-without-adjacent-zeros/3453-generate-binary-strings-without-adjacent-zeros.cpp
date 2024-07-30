class Solution {
public:
void recur(vector<string>&ans,string cur,char prev,int i,int n){
    if(i==n){
        ans.push_back(cur);
        return;
    }
    if(prev=='.' || prev=='1'){
        recur(ans,cur+"0",'0',i+1,n);
    }
    recur(ans,cur+"1",'1',i+1,n);
}
    vector<string> validStrings(int n) {
        vector<string>ans;
        string cur="";
        recur(ans,cur,'.',0,n);
        return ans;
    }
};