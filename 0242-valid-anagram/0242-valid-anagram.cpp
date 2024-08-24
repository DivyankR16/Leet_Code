class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int n=s.size();
        vector<int>cnt(26,0);
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            cnt[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(cnt[i]!=0){
                return false;
            }
        }
        return true;
    }
};