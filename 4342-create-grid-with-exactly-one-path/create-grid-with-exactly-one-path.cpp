class Solution {
public:
    vector<string> createGrid(int m, int n) {
        // Stay Safe. The clouds may dance wildly...
        vector<string> ans;
        for (int i = 0; i < m; i++) {
            string r;
            for (int j = 0; j < n; j++) {
                if (i == 0) r.push_back('.');
                else {
                    if (j != n-1) r.push_back('#');
                    else r.push_back('.');
                }
            }
            ans.push_back(r);
        }
        return ans;
    }
};