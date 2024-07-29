class Solution {
public:
    int subarraysWithKDistinct(vector<int>& a, int k) {
        int n=a.size();
        int j=0;
        map<int,int>mp;
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++){
           mp[a[i]]++;
           if(mp.size()>k){
            mp.erase(a[j]);
            cnt=0;
            j++;
           }
           while(mp[a[j]]>1){
            cnt++;
            mp[a[j]]--;
            j++;
           }
           if(mp.size()==k){
            ans+=1+cnt;
           }
        }
        return ans;
    }
};