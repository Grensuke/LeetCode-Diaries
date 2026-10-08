class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        if (s2.size() < k) return 0;
        vector<int> f(26,0), ans(26, 0);
        for (char &c: s1) ans[c-'a']++;
        for (int i = 0; i < k; i++) {
            f[s2[i]-'a']++;
        }
        if (f == ans) return 1;
        for (int i = k; i < s2.size(); i++) {
            f[s2[i]-'a']++;
            f[s2[i-k]-'a']--;
            if (f == ans) return 1;
        }
        return 0;
    }
};