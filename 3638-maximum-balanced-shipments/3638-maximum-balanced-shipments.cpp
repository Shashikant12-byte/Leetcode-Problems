class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int m=weight[0];
        int n=weight.size();
        int count=0;
        int l=0,r=0;
        int maxi=weight[l];
        while(r<n){
          if(weight[r]<maxi){
            count++;
            if(r<n-1){
             l=r+1;
            maxi=weight[l];
            }
           
          }
          else{
           maxi=weight[r];
          }
          r++;
        }
        return count;
        
    }
};