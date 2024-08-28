class Solution {
public:
    int orangesRotting(vector<vector<int>>& a) {
    int dx[]={1,-1,0,0};
    int dy[]={0,0,1,-1};
        int m=a.size();
        int n=a[0].size();
        queue<pair<int,int>>q;
        // vector<vector<bool>>vis(m,vector<bool>(n,0));
        int fresh=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==2){
                    q.push({i,j});
                }
                else if(a[i][j]==1){
                    fresh++;
                }
            }
        }
        int ans=0;
        while(!q.empty()){
            int sz=q.size();
            for(int j=0;j<sz;j++){
            auto [x,y]=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx>=0 && nx<m && ny>=0 && ny<n && a[nx][ny]==1){
                    q.push({nx,ny});
                    a[nx][ny]=2;
                    fresh--;
                }
            }
            }
            if(!q.empty())ans++;
        }
        return (!fresh?ans:-1);
    }
};