class Solution {
public:
    int hcfxn(int a, int b){
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }
        if(a>b){
            return hcfxn(a%b,b);
        }
        else{
             return hcfxn(b%a,a);

        }         
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        vector<int>v(n);
        for(int i=0;i<n;i++){
             if(nums[i]>maxi){
                maxi=nums[i];
             }
             int hcf=hcfxn(maxi,nums[i]);
             v[i]=hcf;
        }
        sort(v.begin(),v.end());
        int l=0,r=n-1;
        long long sum=0;
        while(l<r){
            sum+=hcfxn(v[r],v[l]);
            l++;
            r--;
        }

        return sum;

    }
};