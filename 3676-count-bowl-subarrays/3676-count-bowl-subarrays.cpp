class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        int n=nums.size();
        stack<int>ng;
        stack<int>pg;
        vector<int>nge(n);
        vector<int>pge(n);
        for(int i=n-1;i>=0;i--){
            while(!ng.empty() && nums[ng.top()]<=nums[i]){
               ng.pop();
            }
            if(!ng.empty()){
                nge[i]=ng.top();
            }
            else{
                nge[i]=n;
            }
            ng.push(i);
        }
        for(int i=0;i<n;i++){
            while(!pg.empty() && nums[pg.top()]<=nums[i]){
               pg.pop();
            }
            if(!pg.empty()){
                pge[i]=pg.top();
            }
            else{
                pge[i]=-1;
            }
            pg.push(i);
        }
        long long count=0;

        for(int i=0;i<n;i++){
            if(nge[i]==n || pge[i]==-1){
                continue;
            }
            else{
                if(min(nums[nge[i]],nums[pge[i]])>nums[i]){
                     count++;
                }
               
            }
        }
        return count;
    }
};