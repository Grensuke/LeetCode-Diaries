class Solution {
public:
    int beautySum(string s) {
        // Nothing, I thought I am at my peak but yes I am at my peak downfall
        int ans = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            vector<int> f(26, 0);
            int maxi = 0;
            for (int j = i; j < n; j++) {
                int mini = INT_MAX;
                f[s[j]-'a']++;
                maxi = max(maxi,f[s[j]-'a']);
                for (int k = 0; k < 26; k++) if (f[k]) mini = min(mini,f[k]);
                ans += maxi-mini;
            }
        }
        return ans;
    }
};