class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int i=10;
        while(n>0){
             if(i>n){
                return false;
            }
            else{
                n-=i;
                i--;
            }
            if(i>n){
                return true;
            }
            else{
                n-=i;
                i--;
            }
           
        }
        return false;
    }
};