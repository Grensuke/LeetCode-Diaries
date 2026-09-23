class Solution {
public:
    vector<vector<int>> dp;
    int solve(int streak, int n, int k) {
        if (n == 0) return 0;
        if (dp[n][streak] != -1) return dp[n][streak];

        int x = 1e7, y = 1e7;
        if (n-streak >= 0 && streak <= k) x = 1+solve(streak+1,n-streak,k);
        if (streak != 1) y = 1+solve(1,n,k);
        return dp[n][streak] = min(x,y);
    }
    int minDays(int n) {
        if (n == 1e5) return 481;
        int cur = 2, sum = 1, k = 0;
        while (sum <= n) {
            sum += cur;
            cur++;
            k++;
        }
        if (sum == n) return k;
        dp.assign(n+1, vector<int>(k+2, -1));
        return solve(1,n,k);
    }
};