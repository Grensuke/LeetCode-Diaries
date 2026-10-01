class Solution {
public:
    vector<vector<int>> ind;
    vector<vector<string>> res;
    int n;
    void solve(int i, vector<string>& ans) {
        if (i == n) {
            res.push_back(ans);
            return;
        }
        for (int j = 0; j < n; j++) { // xcord-j  ycord-i
            bool pos = 1;
            for (int k = 0; k < ind.size(); k++) {// ycord-ind[k][1] xcord-ind[k][0]
                int a = ind[k][1]-i;
                int b = ind[k][0]-j;
                if (abs(a) == abs(b) || j == ind[k][0]) {
                    pos = 0;
                    break;
                }
            }
            if (pos) {
                ind.push_back({j,i});
                //solve(i+1,ans);
                string temp = "";
                for (int k = 0; k < n; k++) {
                    if (k == j) temp.push_back('Q');
                    else temp.push_back('.');
                }
                ans.push_back(temp);
                solve(i+1,ans);
                ans.pop_back();
                ind.pop_back();
            }
        }
    }
    vector<vector<string>> solveNQueens(int N) {
        n = N;
        vector<string> ans;
        solve(0,ans);
        return res;
    }
};