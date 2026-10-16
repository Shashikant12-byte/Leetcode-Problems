class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.length();
        vector<long long>v(n);
        v[n-1]=shifts[n-1];
        for(int i=n-2;i>=0;i--){
            v[i]=shifts[i]+v[i+1];
        }
        for(int i=n-1;i>=0;i--){
            s[i]='a'+(s[i]-'a'+v[i])%26;
        }

        return s;
       

    }
};