class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int l=0,r=k-1;
        int ans=-1,maxi=INT_MIN;
        for(int i=0;i<n;i++){
           maxi=max(maxi,nums[i]);
        }
        if(n==k) return maxi;
        while(r<n){
            for(int i=l;i<=r;i++){
                mp[nums[i]]++;
            }
            r++;
            l++;
        }
        for(auto x:mp){
            if(x.second==1){
                ans=max(ans,x.first);
            }
        }
        return ans;
    }
};