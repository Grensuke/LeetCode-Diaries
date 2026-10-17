class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        // Mada da!
        sort(in.begin(),in.end(), [](const vector<int>&a, vector<int>& b) {
            return a[1] < b[1];
        });
        int ans = 0, n = in.size();
        int maxi = in[0][1];
        for (int i = 1; i < n; i++) {
            if (in[i][0] < maxi) {
                ans++;
                continue;
            }
            maxi = max(maxi,in[i][1]);
        }
        return ans;
    }
};