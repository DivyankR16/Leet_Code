class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int profit=0;
        int prevsel=a[0];
        for(int i=1;i<n;i++){
          if(a[i]<=prevsel){
              prevsel=a[i];
          }
          else{
            profit+=a[i]-prevsel;
            prevsel=a[i];
          }
        }
        if(profit<=0){
            return 0;
        }
        else{
            return profit;
        }
    }
};