class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
         priority_queue<int>p;
        for(int i=0;i<n;i++){
            p.push(stones[i]);
        }
        while(p.size()>1){
             int y,x,diff;
             y=p.top();
             p.pop();
             x=p.top();
             p.pop();
             diff=y-x;
             p.push(diff);
        }
        return p.top();
    }
};