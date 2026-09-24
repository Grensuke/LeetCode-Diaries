class Solution {
public:
    int minDays(int n) {
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int k = 1; (k*(k+1))/2 <= i; k++) {
                int rem = i-((k*(k+1)/2));
                if (rem > 0) {
                    dp[i] = min(k+1+dp[rem],dp[i]);
                } else dp[i]  = min(dp[i], k);
            }
        }
        return dp[n];
    }
};