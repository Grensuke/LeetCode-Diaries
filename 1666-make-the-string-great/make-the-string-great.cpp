class Solution {
public:
    string makeGood(string s) {
        // Dattebayo!
        stack<char> st;
        string ans = "";
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (!st.empty() && (st.top()-32 == s[i] || st.top()+32 == s[i])) {
                ans.pop_back();
                st.pop();
            } else {
                ans.push_back(s[i]);
                st.push(s[i]);
            }
        }
        return ans;
    }
};