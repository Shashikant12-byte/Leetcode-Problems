class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefix=nums[0];
        int n=nums.size();
        int i=1;
        while(i<n){
            if(nums[i]==(nums[i-1]+1)){
                prefix+=nums[i];
            }
            else{
                break;
            }
            i++;
        }
        unordered_set<int>s;
        i=0;
        while(i<n){
            s.insert(nums[i]);
            i++;
        }
        while(s.count(prefix)){
            prefix++;
        }
        return prefix;
    }
};