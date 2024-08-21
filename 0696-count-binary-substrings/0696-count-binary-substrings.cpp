class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int ans=0;
        int p=0;
        int c=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1])c++;
            else{
                ans+=min(p,c);
                p=c;
                c=1;
            }
        }
        ans+=min(p,c);
        return ans;
    }
};