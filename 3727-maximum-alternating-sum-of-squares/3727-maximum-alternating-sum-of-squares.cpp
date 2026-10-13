class Solution {
public:
    static bool comp(int a,int b){
        return abs(a)>abs(b);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),comp);
        int x;
        if(n%2==0) x=n/2;
        else x=n/2+1;
        long long ans=0;
        int i=0;
            while(i<x){
            ans+=1LL*nums[i]*nums[i];
            i++;
            }
            while(i<n){
            ans-=1LL*nums[i]*nums[i];
            i++;
            }
       return ans;
    }
};