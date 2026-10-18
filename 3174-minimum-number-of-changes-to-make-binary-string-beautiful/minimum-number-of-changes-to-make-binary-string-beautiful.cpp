class Solution {
public:
    int minChanges(string s) {
        // Watashi no maho wa kesshite akiramenai
        int cnt = 1, ans = 0, n = s.size();
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) {
                if (cnt%2) {
                    ans++;
                    i++;
                }
                cnt = 1;
            }
            else cnt++;
        }
        return ans;
    }
};