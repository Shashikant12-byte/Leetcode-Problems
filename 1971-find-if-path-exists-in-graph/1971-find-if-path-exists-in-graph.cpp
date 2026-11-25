class Solution {
public:
    unordered_set<int> visited;
    vector<vector<int>> adj;

    bool dfs(int curr, int end) {
        if (curr == end) {
            return true;
        }

        visited.insert(curr);

        for (auto neigh : adj[curr]) {
            if (!visited.count(neigh)) {
                if (dfs(neigh, end)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        adj.resize(n);

        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        return dfs(source, destination);
    }
};