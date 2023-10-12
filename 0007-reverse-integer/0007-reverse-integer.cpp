class Solution {
public:
    int reverse(int x) {
        bool isneg=false;
        if(x<0){
           isneg=true;
        }
        long long x1=abs(x);
        long long ans=0;
        while(x1){
           ans=10*ans+x1%10;
           x1/=10;
           if(isneg){
               if(-ans<INT_MIN){
                   return 0;
               }
           }
           else{
               if(ans>INT_MAX){
                   return 0;
               }
           }
        }
        return (isneg?-((int)ans):(int)ans);
    }
};