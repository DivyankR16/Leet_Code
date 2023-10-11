class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        int i=0;
        while(i<numRows){
            if(i==0){
            vector<int>temp;
            temp.push_back(1);
            ans.push_back(temp);
            }
            else if(i==1){
                vector<int>temp;
                temp.push_back(1);
                temp.push_back(1);
                ans.push_back(temp);
            }
            else{
                vector<int>temp;
                temp.push_back(1);
                for(int j=0;j<ans[i-1].size()-1;j++){
                      temp.push_back(ans[i-1][j]+ans[i-1][j+1]);
                }
                temp.push_back(1);
                ans.push_back(temp);
            }
            i++;
        }
        return ans;
    }
};