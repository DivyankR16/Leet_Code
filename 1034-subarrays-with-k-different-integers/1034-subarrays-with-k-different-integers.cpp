class Solution {
public:
    int solver(vector<int>&a,int k){
        int n=a.size();
        int j=0;
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            while(mp.size()>k){
                mp[a[j]]--;
                if(mp[a[j]]==0){
                    mp.erase(a[j]);
                }
                j++;
            }
            ans+=i-j+1;
        }
        return ans;
    } 
    int subarraysWithKDistinct(vector<int>& a, int k) {
        return solver(a,k)-solver(a,k-1);
    }
};