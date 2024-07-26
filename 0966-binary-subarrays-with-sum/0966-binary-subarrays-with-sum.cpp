class Solution {
public:
    int solver(vector<int>&a,int k){
        int n=a.size();
        int ans=0;
        int cnt=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(a[i]==1)cnt++;
            while(j<=i && cnt>k){
                if(a[j]==1)cnt--;
                j++;
            }
            ans+=i-j+1;
        }
        return ans;
    } 
    int numSubarraysWithSum(vector<int>& a, int goal) {
        return solver(a,goal)-solver(a,goal-1);
    }
};