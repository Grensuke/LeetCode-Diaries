class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int> st;
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push_back(ans);
                ans = 0;
            } else {
                ans = st[st.size()-1]+max(2*ans,1);
                st.pop_back();
            }
        }
        return ans;
    }
};