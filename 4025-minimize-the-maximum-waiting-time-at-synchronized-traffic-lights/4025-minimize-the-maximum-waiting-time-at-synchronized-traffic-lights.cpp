class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int n=lights.size();
        int m=arrivalTime.size();
        int maxi=INT_MIN,ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(lights[i]>maxi){
                maxi=lights[i];
            }
        }
        int penalty;
        for(int i=0;i<m;i++){
            int r=arrivalTime[i]%period;
            if(r<maxi){
                penalty=0;
            }
            else{
                penalty=period-r;
            }

            ans=max(ans,penalty);
        }
        return ans;
    }
};