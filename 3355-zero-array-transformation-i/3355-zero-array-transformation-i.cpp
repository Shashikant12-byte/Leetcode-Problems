class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>arr(n,0);
        for(auto &q:queries){
            int l=q[0];
            int r=q[1];
            arr[l] +=1;
            if(r+1<n){
            arr[r+1] -=1;
            }
        }
        int currSum=0;
        for(int i=0;i<n;i++){
            arr[i]+=currSum;
            currSum=arr[i];
        }
       
       for(int i=0;i<n;i++){
        if(nums[i]>arr[i]) return false;
       }

       return true;
  
    }
};