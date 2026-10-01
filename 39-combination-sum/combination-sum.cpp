class Solution {
public:
    int n,t;
    void solve(int i, int s, vector<int>& c, vector<int> r, vector<vector<int>> &ans) {
        if (i == n || s >= t) {
            if (s == t) ans.push_back(r);
            return;
        }
        solve(i+1,s,c,r,ans);
        while (s < t) {
            r.push_back(c[i]);
            s+=c[i];
            solve(i+1,s,c,r,ans);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int ta) {
        vector<vector<int>> ans;
        n = c.size();
        t = ta;
        vector<int> r;
        solve(0,0,c,r,ans);
        return ans;
    }
};