class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        int n=a.size();
        map<int,int>mp;
        int sum=0;
        int ans=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=a[i];
            ans+=mp[(sum%k+k)%k];
            mp[(sum%k+k)%k]++;
        }
        return ans;
    }
};