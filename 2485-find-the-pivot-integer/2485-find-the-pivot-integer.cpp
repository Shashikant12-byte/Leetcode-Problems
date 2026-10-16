class Solution {
public:
    int pivotInteger(int n) {
        vector<int>left(n);
        vector<int>right(n);
        left[0]=1;
        for(int i=2;i<=n;i++){
           left[i-1]=i+left[i-2];
        }
        right[n-1]=n;
        for(int i=n-1;i>0;i--){
            right[i-1]=i+right[i];
        }
        for(int i=0;i<n;i++){
            if(left[i]==right[i]) return i+1;
        }
        return -1;

    }
};