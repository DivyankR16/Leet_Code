class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int ans=0;
        int j=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
        int cnt=0;
            mp[s[i]-'a']++;
            while(mp.size()==3){
                cnt++;
                mp[s[j]-'a']--;
                if(mp[s[j]-'a']==0){
                    mp.erase(s[j]-'a');
                }
                j++;

            }
            ans+=(n-i)*cnt;
        }
        return ans;
    }
};