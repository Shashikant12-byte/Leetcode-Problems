class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int len=1,n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[j-1]){
                    len=max(len,j-i+1);
                }
              else{
                break;
              }
            } 
        }
         for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[j-1]){
                    len=max(len,j-i+1);
                }
              else{
                break;
              }
            } 
        }
        return len;
    }
};