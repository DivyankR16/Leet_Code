class Solution {
public:
    bool isPowerOfTwo(int n) {
         int x=1;
         while(x<=n){
            if(x==n)return 1;
            if(x>(INT_MAX/2))break;
            x<<=1;
         }
         return 0;
    }
};