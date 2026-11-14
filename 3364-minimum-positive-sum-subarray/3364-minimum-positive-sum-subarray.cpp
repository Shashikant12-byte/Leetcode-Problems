class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX;
        int n=nums.size();
        while(l<=r){
            int sum=0;
            for(int i=0;i<l;i++){
                sum+=nums[i];
            }
            if(sum>0){
                ans=min(ans,sum);
            }
            int x=0,y=l;
            while(y<n){
             sum+=nums[y];
             sum-=nums[x];
             if(sum>0){
               ans=min(ans,sum);
             }
             y++;
             x++;
            }
            l++;
        }
        return (ans!=INT_MAX)?ans:-1;
    }
};