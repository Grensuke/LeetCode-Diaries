class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // tc2
        vector<int> f(26), req(26), ans;
        for (char &c : p) req[c-'a']++;
        int k = p.size(), n = s.size();
        for (int i = 0; i < min(k,n); i++) f[s[i]-'a']++;
        if (f == req) ans.push_back(0);
        for (int i = k; i < s.size(); i++) {
            f[s[i]-'a']++;
            f[s[i-k]-'a']--;
            if (f == req) ans.push_back(i-k+1);
        }
        return ans;
    }
};