class Solution {
public:
    int prefixCount(vector<string>& w, string pref) {
        // Need to change
        int n = w.size(), m = pref.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            if (pref.size() > w[i].size()) continue;
            bool cur = 1;
            for (int j = 0; j < pref.size(); j++) {
                if (w[i][j] != pref[j]) {
                    cur = 0;
                    break;
                }
            }
            if (cur) ans++;
        }
        return ans;
    }
};