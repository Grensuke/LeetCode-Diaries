class Solution {
public:
    int n,k;
    void solve(int i, vector<int> &r, vector<vector<int>>&ans) {
        if (r.size() == k || i == n+1) {
            if (r.size() == k) ans.push_back(r);
            return;
        }
        solve(i+1,r,ans);
        r.push_back(i);
        solve(i+1,r,ans);
        r.pop_back();
    }
    vector<vector<int>> combine(int N, int K) {
        n=N;
        k=K;
        vector<vector<int>> ans;
        vector<int> r;
        solve(1,r,ans);
        return ans;
    }
};