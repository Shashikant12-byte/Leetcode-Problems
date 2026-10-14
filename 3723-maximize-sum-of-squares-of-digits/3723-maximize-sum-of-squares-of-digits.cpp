class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int x=9;
        string s="";
        if(num*9<sum) return s;
        while(num>0){
            if(sum<=9){
                s+=char('0'+sum);
                sum=0;
            }
            else{
              s+=char('0'+x);
              sum-=x;
            }
            num--;
        }
        return s;
    }
};