class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.length();
        int prevCount=0, currCount=0, ones=0, maxSum=INT_MIN, zeroSeg=0;
        int i=0;
        while(i<n){
            if(s[i]=='0'){
                currCount++;
            }
            else{
                ones++;
                if(currCount>0){
                     maxSum=max(maxSum,currCount+prevCount);
                     prevCount=currCount;
                     currCount=0;
                      zeroSeg++;
                }
               
            }
         i++;

        }
        if(currCount>0){
                     maxSum=max(maxSum,currCount+prevCount);
                     prevCount=currCount;
                     currCount=0;
                      zeroSeg++;
                }
        if(zeroSeg>1){
 return ones+maxSum;
        }
        return ones;
       
    }
};