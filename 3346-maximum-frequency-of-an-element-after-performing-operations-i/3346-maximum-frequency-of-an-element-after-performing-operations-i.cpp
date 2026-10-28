class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int maxi=*max_element(begin(nums),end(nums))+k;
        vector<int>diff(maxi+2,0);
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            int l=max(nums[i]-k,0);
            int r=min(nums[i]+k,maxi);
            diff[l]++;
            diff[r+1]--;
        }
        int currSum=0;
        int ans=1;
        for(int target=0;target<=maxi;target++){
            diff[target] +=(target>0 ? diff[target-1]:0);
            int targetFreq= freq[target];
            int needConversion= diff[target] - targetFreq;
            int maxPossibleFreq= min(needConversion, numOperations);

            ans=max(ans,targetFreq+maxPossibleFreq);
                    }

        return ans;
    }
};