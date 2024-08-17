class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        bool fans=true;
        for(int i=2;i<=n-2;i++){
            int val=n;
            vector<int>a;
            while(val){
                int d=val%i;
                a.push_back(d);
                val/=i;
            }
            bool abc=true;
           for(int i=0;i<a.size()/2;i++){
            if(a[i]!=a[a.size()-i-1]){
                abc=false;
                break;
            }
           }
           fans=fans && abc;
        }
        return fans;
    }
};