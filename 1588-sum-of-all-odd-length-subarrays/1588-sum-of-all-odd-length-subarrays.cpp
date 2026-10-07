class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int currsum=0;
            for(int j=i;j<n;j++){
                currsum+=arr[j];
                if((j-i+1)%2!=0){
                    sum+=currsum;
                }
            }
        }
        return sum;
    }
};