class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expect(heights);
        sort(expect.begin(),expect.end());
        int n=heights.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=expect[i]){
                count++;
            }
        }
        return count;
    }
};