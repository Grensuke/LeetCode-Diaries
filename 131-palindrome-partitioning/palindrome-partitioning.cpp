class Solution {
public:
    int n;
    bool isp(string s) {
        for (int i = 0; i < s.size()/2; i++) {
            if (s[i] != s[s.size()-i-1]) return 0;
        }
        return 1;
    }
    void solve(int i,string& s, string& temp, vector<string>& cur, vector<vector<string>>& ans) {
        if (i == n) {
            ans.push_back(cur);
            return;
        }
        temp.push_back(s[i]);
        string new_temp = "";
        if (isp(temp)) {
            cur.push_back(temp);
            solve(i+1,s,new_temp,cur,ans);
            cur.pop_back();
        }
        if (i != n-1) solve(i+1,s,temp,cur,ans);
    }
    vector<vector<string>> partition(string s) {
        n = s.size();
        string temp = "";
        vector<string> cur;
        vector<vector<string>> ans;
        solve(0,s,temp,cur,ans);
        return ans;
    }
};