class Solution {
public:
    vector<string> ans;
    void solve(int a, int b, string temp, int n) {
        if (a+b == 2*n) {
            ans.push_back(temp);
            return;
        }
        if (a < n) {
            solve(a+1,b,temp+"(",n);
        }
        if (b < a) {
            solve(a,b+1,temp+")",n);
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(0,0,"",n);
        return ans;
    }
};