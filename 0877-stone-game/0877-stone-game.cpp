class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int l=0,r=n-1;
        int alice=0;
        int bob=0;
        while(l<r){
           if(piles[l]==piles[r]){
            alice+=piles[l];
            bob+=piles[r];
            l++;
            r--;
           }
           else if(piles[l]>piles[r]){
            alice+=piles[l];
            bob+=piles[r];
            l++;
            r--;
           }
           else{
            alice+=piles[r];
            bob+=piles[l];
            l++;
            r--;
           }
        }
        if(alice>bob){
            return true;
        }
        return false;

    }
};