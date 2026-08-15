class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int currxor=0;
        bool allzero=true;
        int n=nums.size();
        for(int i=0;i<n;i++){
            currxor=currxor^nums[i];
            if(nums[i]!=0){
                allzero=false;
            }
        }
        if(allzero) return 0;
        return (currxor==0)? n-1:n;
    }
};