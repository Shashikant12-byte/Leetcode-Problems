class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int n=logs[0].size();
        vector<int>diff(2051,0);
        for(auto &l:logs){
            int s=l[0];
            int e=l[1]-1;
            diff[s]+=1;
            diff[e+1]-=1;
        }
        int maxi=INT_MIN;
        int cursum=0;
        int ans;
        for(int i=1;i<2051;i++){
           diff[i]+=cursum;
           cursum=diff[i];
           if(diff[i]>maxi){
            maxi=diff[i];
            ans=i;
           }
        }
        return ans;



    }
};