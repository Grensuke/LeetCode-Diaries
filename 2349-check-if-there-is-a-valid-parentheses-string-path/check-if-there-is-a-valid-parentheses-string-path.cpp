class Solution {
public:
    int m,n;
    int dp[101][101][201];
    bool solve(int i, int j, int b, vector<vector<char>>& grid) {
        if (i == m-1 && j == n-1) {
            if (b == 0) {
                return 1;
            }
            return 0;
        }
        if (dp[i][j][b] != -1) return dp[i][j][b] == 1;
        bool x = 0;
        if (i+1 < m) {
            if (grid[i+1][j] == ')')  {
                if (b > 0) x = solve(i+1,j,b-1,grid);
            } 
            else x = solve(i+1,j,b+1,grid);
            if (x) return dp[i][j][b] = 1;
        }
        if (j+1 < n) {
            if (grid[i][j+1] == ')'){
                if (b > 0) x = solve(i,j+1,b-1,grid);
            } 
            else x = solve(i,j+1,b+1,grid);
            if (x) return dp[i][j][b] = 1;
        }
        return dp[i][j][b] = 0;
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        if (grid[0][0] == ')') return 0;
        m = grid.size(), n = grid[0].size();
        for (int i = 0; i < 101; i++) {
            for (int j = 0; j < 101; j++) {
                for (int k = 0; k < 201; k++) dp[i][j][k] = -1;
            }
        }
        return solve(0,0,1,grid);
    }
};