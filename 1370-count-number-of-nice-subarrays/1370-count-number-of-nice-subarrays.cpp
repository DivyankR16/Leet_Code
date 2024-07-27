class Solution {
public:
    int numberOfSubarrays(vector<int>& a, int k) {
       int n=a.size();
       int cnt=0;
       int val=0;
       int ans=0;
       int j=0;
       for(int i=0;i<n;i++){
        if(a[i]%2==1){
            cnt++;
            val=0;
        }
        while(cnt==k){
            val++;
            if(a[j]%2==1)cnt--;
            j++;
        }
        ans+=val;
       }
       return ans;
    }
};