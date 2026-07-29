class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(), [] (const vector<int>&a, const vector<int>&b){
            return a[1]<b[1];
        });
        int n=intervals.size();
        int i=1,count=0;
        int lastEnd=intervals[0][1];
        while(i<n){
            if(intervals[i][0]>=lastEnd){
                count++;
                lastEnd=intervals[i][1];
            }
            i++;
        }
        return n-count-1;
    }
};