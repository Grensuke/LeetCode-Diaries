class Solution {
public:
    int n;
    int dp[366][400];
    int solve(int i, vector<int>&d, vector<int>&c, int limit) {
        while(i < n && d[i] < limit) i++;
        if (i == n) return 0;
        if (dp[i][limit] != -1) return dp[i][limit];
        if (i == n) return 0;
        int x=1e8,y=1e8,z=1e8;
        x = c[0]+solve(i+1,d,c,d[i]+1);
        y = c[1]+solve(i+1,d,c,d[i]+7);
        z = c[2]+solve(i+1,d,c,d[i]+30);
        return dp[i][limit] = min({x,y,z});
    }
    int mincostTickets(vector<int>& d, vector<int>& c) {
        n = d.size();
        memset(dp, -1, sizeof(dp));
        return solve(0,d,c,0);
    }
};