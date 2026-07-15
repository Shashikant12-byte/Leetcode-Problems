class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum=0, evenSum=0;
        oddSum=n*n;
        evenSum=n*(n+1);

        int mini=min(oddSum,evenSum);
        int ans=-1;
        for(int i=1;i<=mini;i++){
            if(oddSum%i==0 && evenSum%i==0){
                ans=i;
            }
        }
        return ans;

    }
};