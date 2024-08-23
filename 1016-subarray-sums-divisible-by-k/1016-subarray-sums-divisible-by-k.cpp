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
            ans+=mp[sum%k];
            if(sum!=0 && sum>0){
                    ans+=mp[-(k-(sum%k))];
            }
            if(sum!=0 && sum<0){
                    ans+=mp[k+(sum%k)];
            }
            mp[sum%k]++;
        }
        return ans;
    }
};