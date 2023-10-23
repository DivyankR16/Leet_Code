class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
        int non_rotten=0;
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    non_rotten++;
                }
            }
        }
        while(!q.empty() && non_rotten){
            int size=q.size();
            for(int i=0;i<size;i++){
                bool isck=false;
            // int i_nn_rttn=non_rotten;
            auto [x,y]=q.front();
            q.pop();
            if(x>0 && grid[x-1][y]==1){
                isck=true;
                non_rotten--;
                q.push({x-1,y});
                grid[x-1][y]=2;
            }
            if(x<m-1 && grid[x+1][y]==1){
                isck=true;
                non_rotten--;
                q.push({x+1,y});
                grid[x+1][y]=2;
            }
            if(y>0 && grid[x][y-1]==1){
                isck=true;
                non_rotten--;
                q.push({x,y-1});
                grid[x][y-1]=2;
            }
            if(y<n-1 && grid[x][y+1]==1){
                isck=true;
                non_rotten--;
                q.push({x,y+1});
                grid[x][y+1]=2;
            }
        }
            ans++;
        }
        return (!non_rotten?ans:-1);
    }
};