class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int n=s.length();
        int len=INT_MIN;
        int l=0,r=0;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};