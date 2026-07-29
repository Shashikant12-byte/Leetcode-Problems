class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a, const vector<int>&b){
            return a[0]<b[0];
        });
        int n=intervals.size();
        vector<vector<int>>ans;
        int l=0,r=1;
        while(r<n){
            if(intervals[r][0]<=intervals[l][1]){
               intervals[l][0]=min(intervals[l][0],intervals[r][0]);
               intervals[l][1]=max(intervals[l][1],intervals[r][1]);
            }
            else{
                ans.push_back(intervals[l]);
                l=r;
            }
            
            r++;
        }
        ans.push_back(intervals[l]);
        return ans;
    }
};