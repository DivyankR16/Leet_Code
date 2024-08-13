class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        int n=a.size();
        priority_queue<int>p;
        for(auto i:a){
            p.push(i);
        }
        int ans=0;
        for(int i=0;i<k;i++){
            ans=p.top();
            p.pop();
        }
        return ans;
    }
};