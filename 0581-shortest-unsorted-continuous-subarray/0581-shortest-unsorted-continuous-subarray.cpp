class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        stack<int>s;
        int n=nums.size();
        int maxseen=INT_MIN;
        int minseen=INT_MAX;
        int r=-1;
        int l=-1;
        for(int i=0;i<n;i++){
            maxseen=max(maxseen,nums[i]);
            if(nums[i]<maxseen){
                r=i;
            }
        }

         for(int i=n-1;i>=0;i--){
            minseen=min(minseen,nums[i]);
            if(nums[i]>minseen){
                l=i;
            }
        }
        if(r==-1 && l==-1) return 0;
        return (r-l)+1;
    }
};