class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        // Tatakawa nakereba Katenai
        vector<vector<int>> ans;
        vector<int> temp;
        dfs(0, graph, ans, temp);
        return ans;
    }
    void dfs(int i, vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int>& temp) {
        int n = graph.size();
        temp.push_back(i);
        if (i == n-1) {
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
        for (int j = 0; j < graph[i].size(); j++) {
            dfs(graph[i][j], graph, ans, temp);
        }
        temp.pop_back();
    }
};