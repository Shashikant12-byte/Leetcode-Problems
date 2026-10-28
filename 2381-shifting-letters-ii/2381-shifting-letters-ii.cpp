class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.length();
        vector<int>arr(n,0);
        for(auto &s:shifts){
            int l=s[0];
            int r=s[1];
            if(s[2]==0){
            arr[l] -=1;
            if(r+1<n){
                arr[r+1] +=1;
            } 
            }
            else{
                arr[l] +=1;
                if(r+1<n){
                    arr[r+1] -=1;
                }
            } 
        }
        int currsum=0;
        for(int i=0;i<n;i++){
            arr[i]+=currsum;
            currsum=arr[i];
        }

        for(int i=0;i<n;i++){
            int diff=arr[i]%26;
            if(diff<0){
                diff+=26;
            } 
            s[i]=(s[i]-'a'+diff)%26+'a';
        }

      return s;

    }
};