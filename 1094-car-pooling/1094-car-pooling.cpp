class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>mp;
         
        for(auto &t:trips){
            mp[t[1]]+=t[0];
            mp[t[2]]-=t[0];
        }
        int curr=0;
        for(auto &m:mp){
            curr+=m.second;
            if(curr>capacity){
                return false;
            } 
        }
        return true;
    }
};