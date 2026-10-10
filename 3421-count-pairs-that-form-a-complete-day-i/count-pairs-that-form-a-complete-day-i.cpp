class Solution {
public:
    int countCompleteDayPairs(vector<int>& h) {
        int n = h.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                long long x = 1ll*h[i]+1ll*h[j];
                if (x%24 == 0) ans++;
            }
        }
        return ans;
    }
};