class Solution {
public:
    bool isPallindrome(string &s){
        int n=s.size();
        for(int i=0;i<=n/2;i++){
           if(s[i]!=s[n-i-1]){
               return false;
           }
        }
        return true;
    }
    void partition(vector<vector<string>>&ans,vector<string>&temp,string &s){
        if(s.size()==0){
           ans.push_back(temp);
           return;
        }
        int n=s.size();
        for(int i=0;i<n;i++){
            string taken=s.substr(0,i+1);
            if(isPallindrome(taken)){
                temp.push_back(taken);
                string left=s.substr(i+1);
                partition(ans,temp,left);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        partition(ans,temp,s);
        return ans;
    }
};