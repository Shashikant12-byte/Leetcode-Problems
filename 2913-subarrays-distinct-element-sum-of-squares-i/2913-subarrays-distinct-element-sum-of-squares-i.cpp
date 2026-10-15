class Solution {
public:
    int sumCounts(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
             mp.clear();
            for(int j=i;j<n;j++){
               mp[nums[j]]++;
               ans+=mp.size()*mp.size();
            }
        }
        return ans;
    }
};