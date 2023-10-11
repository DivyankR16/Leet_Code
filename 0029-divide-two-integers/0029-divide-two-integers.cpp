class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        if(dividend == INT_MIN && divisor == 1){
            return INT_MIN;
        }
        if(dividend == INT_MAX && divisor == 1){
            return INT_MAX;
        }
        if(dividend == INT_MAX && divisor == -1){
            return -INT_MAX;
        }
         unsigned int dd=abs(dividend);
        unsigned int dv=abs(divisor);
        if((dividend>0 && divisor>0) || (dividend<0 && divisor<0)){
        int ans=0;
        while(dd>=dv){
           dd-=dv;
           ans++;
        }
    return ans;
    }
    else if((dd==0)){
        return 0;
    }
    else{
         int ans=0;
        while(dd>=dv){
           dd-=dv;
           ans++;
        }
    return -ans;
    }
    }
};