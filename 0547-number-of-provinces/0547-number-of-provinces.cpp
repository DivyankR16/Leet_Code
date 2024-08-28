class Solution {
public:
    vector<vector<int>>g;
    vector<int>vis;
    void dfs(int u){
        vis[u]=1;
        for(auto v:g[u]){
            if(!vis[v]){
                dfs(v);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& m) {
        int n=m.size();
        vector<vector<int>>b(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(m[i][j]){
                    b[i].push_back(j);
                }
            }
        }
        this->g=b;
        this->vis=vector<int>(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i);
                ans++;
            }
        }
        return ans;
    }
};