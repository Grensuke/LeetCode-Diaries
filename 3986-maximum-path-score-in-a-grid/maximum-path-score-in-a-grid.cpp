class Solution {
public:
    short dp[201][201][401];
    int m,n;
    int solve(int i, int j, vector<vector<int>>& grid, int k, int sum) {
        if (i == m-1 && j == n-1) {
            int sub;
            if (grid[i][j] == 0) sub = 0;
            else sub = 1;
            sum += sub;
            if (k-sum >= 0) return grid[i][j];
            return -1e6;
        }
        if (dp[i][j][sum] != -1) return dp[i][j][sum];
        int x = -1e6, y = -1e6;
        int sub;
        if (grid[i][j] == 0) sub = 0;
        else sub = 1;
        if (i < m-1 && k-sub >= 0) x = grid[i][j]+solve(i+1,j,grid,k,sum+sub);
        if (j < n-1 && k-sub >= 0) y = grid[i][j]+solve(i,j+1,grid,k,sum+sub);
        
        return dp[i][j][sum] = max(x,y);
    }
    int maxPathScore(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        memset(dp, -1, sizeof(dp));
        int ans = solve(0,0,grid,k,0);
        if (ans < 0) return -1;
        return ans;
    }
};