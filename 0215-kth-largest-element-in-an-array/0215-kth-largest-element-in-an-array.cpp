class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>>p;
        int i;
        for(i=0;i<k;i++){
            p.push(nums[i]);
        }
        for(i=k;i<n;i++){
             if(nums[i]>p.top()){
                p.pop();
                p.push(nums[i]);
             }
        }
        return p.top();
    }
};