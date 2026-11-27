class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        unordered_map<int,int>mp;
        int l=0,r=0;
        int ans=0;
        while(r<n){
            mp[s[r]]++;
            while(mp.size()==3){
                ans+=n-r;
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};