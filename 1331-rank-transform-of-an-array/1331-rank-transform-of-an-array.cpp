class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v(arr);
        sort(v.begin(),v.end());
        int rank=0;
        unordered_map<int,int>mp;
        for(int i=0;i<v.size();i++){
            if(!mp.count(v[i])){
                rank++;
                mp[v[i]]=rank;
            }
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
           ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};