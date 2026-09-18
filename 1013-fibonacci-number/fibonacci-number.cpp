class Solution {
public:
    vector<int> dp;
    int fibi(int n) {
        if (n <= 1) return n;

        if (dp[n] != -1) return dp[n];

        return dp[n] = fibi(n-1)+fibi(n-2);
    }
    int fib(int n) {
        dp.assign(n+1, -1);
        return fibi(n);
    }
};