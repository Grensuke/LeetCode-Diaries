class Solution {
public:
    int countCharacters(vector<string>& w, string chars) {
        // Tbh I am kind of angry so I did that on purpose. My bad!
        map<char, int> f;
        for (char &i : chars) f[i]++;
        int ans = 0;
        for (int i = 0; i < w.size(); i++) {
            bool c = 1;
            map<char, int> f1;
            f1 = f;
            for (int j = 0; j < w[i].size(); j++) {
                if (f1[w[i][j]] == 0) {
                    c = 0;
                    break;
                }
                f1[w[i][j]]--;
            }
            if (c) ans += w[i].size();
        }
        return ans;
    }
};