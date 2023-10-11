class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        int st=a[0][0];
        int ed=a[0][1];
        if(n==1){
            ans.push_back({st,ed});
        }
        int i=1;
        while(i<n){
            if(ed<a[i][0]){
                ans.push_back({st,ed});
                    st=a[i][0];
                    ed=a[i][1];
            }
            else if(ed<a[i][1]){
                ed=a[i][1];
            }
            if(i==n-1){
                ans.push_back({st,ed});
                }
          i++;
        }
        return ans;
    }
};