class Solution {
public:
    vector<int>pse(vector<int>& v){
        stack<int>s;
        int n=v.size();
        vector<int>v1(n);
        for(int i=0;i<n;i++){
            while(!s.empty() && v[s.top()]>=v[i]){
                s.pop();
            }
            if(!s.empty()){
              v1[i]=s.top();
            }
            else{
                v1[i]=-1;
            }
            s.push(i);
        }
        return v1;
    }

    vector<int>nse(vector<int>& v){
        stack<int>s;
        int n=v.size();
        vector<int>v2(n);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && v[s.top()]>=v[i]){
                s.pop();
            }
            if(!s.empty()){
              v2[i]=s.top();
            }
            else{
                v2[i]=n;
            }
            s.push(i);
        }
        return v2;
    }
    int largestRectangleArea(vector<int>& heights) {
        int ans=INT_MIN;
        int n=heights.size();
        vector<int>v1(pse(heights));
        vector<int>v2(nse(heights));

        for(int i=0;i<n;i++){
            ans=max(ans,heights[i]*(v2[i]-v1[i]-1));
        }
        return ans;
        
    }
};