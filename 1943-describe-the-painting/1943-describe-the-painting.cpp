class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        map<int,long long>mp;
        for(auto &s:segments){
            mp[s[0]]+=s[2];
            mp[s[1]]-=s[2];
        }
        vector<vector<long long>>ans;
        auto it=mp.begin();
        long long currsum=it->second;
        long long start=it->first;

        it++;
        while(it!=mp.end()){
            if(currsum>0){
                ans.push_back({start,it->first,currsum});
            }
            start=it->first;
            currsum+=it->second;
            it++;
        }
        return ans;

    }
};