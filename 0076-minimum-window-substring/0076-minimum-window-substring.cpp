class Solution {
public:
    string minWindow(string s, string t) {
         map<char,int>mp;
         for(auto i:t){
            mp[i]++;
         }
         int j=0;
         int n=s.size();
         int st=-1;
         int len=INT_MAX;
         for(int i=0;i<n;i++){
            mp[s[i]]--;
            bool ck=true;
            for(auto e:mp){
                if(e.second>0){
                    ck=false;
                    break;
                }
            }
            while(ck){
                int curlen=i-j+1;
                if(curlen<len){
                    len=curlen;
                    st=j;
                }
                mp[s[j]]++;
                j++;
            for(auto e:mp){
                if(e.second>0){
                    ck=false;
                    break;
                }
            }
            }
         }
         if(st!=-1){
            return s.substr(st,len);
         }
         else{
            return "";
         }
    }
};