class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int d) {
        // Daijoubu desho
        if (source == d) return 1;
        vector<vector<int>> adj(n);
        vector<bool> vis(n, false);
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        q.push(source);
        vis[source] = 1;
        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            for (int i = 0; i < adj[cur].size(); i++) {
                if (!vis[adj[cur][i]]) {
                    if (adj[cur][i] == d) return 1;
                    vis[adj[cur][i]] = 1;
                    q.push(adj[cur][i]);
                }
            }
        }
        return 0;
    }
};