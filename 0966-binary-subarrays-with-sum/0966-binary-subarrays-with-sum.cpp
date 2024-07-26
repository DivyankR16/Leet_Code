class Solution {
public:
    int numSubarraysWithSum(vector<int>& a, int goal) {
        int n=a.size();
        map<int,int>mp;
        // mp[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum==goal)ans++;
            if(mp.find(sum-goal)!=mp.end()){
            ans+=mp[sum-goal]; 
            }
            mp[sum]++;
        }
        return ans;
    }
};