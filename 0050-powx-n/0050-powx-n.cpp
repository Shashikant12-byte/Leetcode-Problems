class Solution {
public:
    double power(double a,long long b){
        if(b==0){
            return 1;
        }
        double half=power(a,b/2);
        double result=half*half;

        if(b%2==1){
            result=result*a;
        }
         return result;

    }
      
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
         return power(x,N);
    }
};