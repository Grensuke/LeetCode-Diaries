class Solution {
public:
    int minAddToMakeValid(string s) {
        int c = 0;
        int ans = 0;
        for (auto &i : s) {
            if (i == '(') c++;
            else c--;
            if (c < 0) {
                ans++;
                c++;
            }
        }
        return ans+abs(c);
    }
};