class Solution {
public:
    int minInsertions(string s) {
        int n = s.size(), ans = 0;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') cnt++;
            else {
                if (i != n-1 && s[i+1] == ')') i++;
                else ans++;
                cnt--;
            }
            if (cnt < 0) {
                ans++;
                cnt++;
            }
        }
        if (cnt) ans += cnt*2;
        return ans;
    }
};