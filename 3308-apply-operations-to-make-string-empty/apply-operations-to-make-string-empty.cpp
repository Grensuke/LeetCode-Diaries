class Solution {
public:
    string lastNonEmptyString(string s) {
        string ans = "";
        vector<int> f(26, 0);
        int maxi = 0;
        for (char &c : s) {
            f[c-'a']++;
            maxi = max(maxi,f[c-'a']);
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++) if (f[i] == maxi) cnt++;
        for (int i = s.size()-1; i >= 0; i--) {
            if (f[s[i]-'a'] == maxi) {
                cnt--;
                f[s[i]-'a']--;
                ans.push_back(s[i]);
            }
            if (!cnt) break;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};