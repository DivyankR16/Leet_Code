class Solution {
public:
    int subarraysWithKDistinct(vector<int>& a, int k) {
        int n=a.size();
        map<int,int>mp;
        int j=0;
        int ans=0;
        int cnt=0;
        for(int i=0;i<n;i++){
           mp[a[i]]++;
           if(mp.size()>k){
            cnt=0;
            mp[a[j]]--;
            mp.erase(a[j]);
            j++;
           }
           while(mp[a[j]]>1){
            mp[a[j]]--;
            cnt++;
            j++;
           }
           if(mp.size()==k){
            ans+=1+cnt;
           }
        }
        return ans;
    }
};