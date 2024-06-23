class Solution {
public:
    vector<int> threeEqualParts(vector<int>& a) {
       int n=a.size();
       int cnt=0;
       for(int i=0;i<n;i++){
        if(a[i]==1)cnt++;
       }
       if(cnt%3){
        return {-1,-1};
       }
       if(cnt==0){
        return {0,n-1};
       }
       int cur=0;
       cnt/=3;
       int p1=-1;
       int p2=-1;
       int p3=-1;
       for(int i=0;i<n;i++){
        if(a[i]==1){
            if(cur==0){
                p1=i;
            }
            if(cur==cnt){
                p2=i;
            }
            if(cur==2*cnt){
                p3=i;
            }
            cur++;
        }
       }
       while(p3<n-1){
          p1++;
          p2++;
          p3++;
          if(a[p1]!=a[p2] || a[p2]!=a[p3] || a[p1]!=a[p3]){
            return {-1,-1};
          }
       }
       return {p1,p2+1};
    }
};