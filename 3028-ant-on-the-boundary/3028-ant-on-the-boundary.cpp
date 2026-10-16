class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=nums[i]+pre[i-1];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(pre[i]==0) count++;
        }
        return count;
    }
};