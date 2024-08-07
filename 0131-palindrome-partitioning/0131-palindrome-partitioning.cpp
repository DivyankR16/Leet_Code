class Solution {
public:
string s;
unordered_map<int,vector<vector<string>>>mp;
bool ispal(int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
vector<vector<string>>solver(int i){
    if(i==s.size()){
        return vector<vector<string>>();
    }
    if(mp.count(i)){
        return mp[i];
    }
    vector<vector<string>>ans;
    for(int j=i;j<s.size();j++){
        if(ispal(i,j)){
        vector<vector<string>>res=solver(j+1);
        string cur=s.substr(i,j-i+1);
        for(auto &x:res){
            x.insert(x.begin(),cur);
        }
        if(res.empty()){
            res.push_back({cur});
        }
        for(auto v:res){
            ans.push_back(v);
        }

        }
        
    }
    return mp[i]=ans;
}
    vector<vector<string>> partition(string s) {
        this->s=s;
        return solver(0);
    }
};