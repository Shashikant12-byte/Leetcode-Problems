class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        int mini=0;
        for(int i=0;i<n;i++){
            mini=min(mini,pre[i]);
        }
        
        int ans = 1-mini;
        return ans;
    }
};