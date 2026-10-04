class Solution {
public:
    int dp[102][102];
    int n;
    bool solve(int i, string& s, int b) {
        if (i == n) {
            if (b == 0) return 1;
            return 0;
        }
        if (dp[i][b] != -1) return dp[i][b];
        if (s[i] == '*') {
            bool x = 0, y = 0, z = 0;
            x = solve(i+1, s, b+1);
            if (b > 0) y = solve(i+1,s,b-1);
            z = solve(i+1, s, b);
            return dp[i][b] = max({x,y,z});
        } else {
            if (s[i] == '(') return dp[i][b] = solve(i+1,s,b+1);
            else {
                if (b <= 0) return dp[i][b] = 0;
                return dp[i][b] = solve(i+1,s,b-1);
            }
        }
    }
    bool checkValidString(string s) {
        n = s.size();
        for (int i = 0; i < 102; i++) {
            for (int j = 0; j < 102; j++) dp[i][j] = -1;
        }
        return solve(0,s,0);
    }
};