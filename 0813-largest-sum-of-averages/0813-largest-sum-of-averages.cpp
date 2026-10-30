class Solution {
public:
    double dp[105][105];
    double rec(vector<int>&nums,int curr,int k){
        if(curr>=nums.size() || k<0) return 0;
        if(k==0){
            return INT_MIN;
        }
        if(dp[curr][k]!=0) return dp[curr][k];
        double sum=0;
        double ans=0;
        for(int i=curr;i<nums.size();i++){
            sum+=nums[i];
            ans=max(ans,sum/(i-curr+1)+rec(nums,i+1,k-1));
        }
        return dp[curr][k]=ans;
    }
    double largestSumOfAverages(vector<int>& nums, int k) {
        memset(dp,0,sizeof(dp));
        return rec(nums,0,k);
    }
};