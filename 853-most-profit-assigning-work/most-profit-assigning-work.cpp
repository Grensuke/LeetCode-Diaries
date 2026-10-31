class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
        // Arise
        int n = d.size(), m = w.size();
        vector<vector<int>> mp;
        for (int i = 0; i < n; i++) mp.push_back({d[i],p[i]});
        sort(mp.begin(),mp.end());
        for (int i = 0; i < n; i++) d[i] = mp[i][0];
        vector<int> pre(n);
        pre[0] = mp[0][1];
        for (int i = 1; i < n; i++) pre[i] = max(pre[i-1],mp[i][1]);
        int ans = 0;
        for (int i = 0; i < m; i++) {
            auto it = upper_bound(d.begin(),d.end(), w[i]);
            if (it == d.begin()) continue;
            it--;
            int ind = it - d.begin();
            ans += pre[ind];
        }
        return ans;
    }
};