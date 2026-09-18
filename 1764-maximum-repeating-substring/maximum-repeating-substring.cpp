class Solution {
public:
    int maxRepeating(string s, string w) {
        int a = s.size(), b = w.size();
        int i = 0;
        int ans = 0, cnt = 0;
        while (i < a-b+1) {
            if (s.substr(i,b) == w) {
                cnt++;
                i += b;
            } else {
                if (cnt != 0) i -= b;
                cnt = 0;
                i++;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};