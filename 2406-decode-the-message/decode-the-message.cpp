class Solution {
public:
    string decodeMessage(string key, string m) {
        // I will learn making tea for you then :) :D
        vector<int> mp(26, -1);
        int cur = 0;
        for (int i = 0; i < key.size(); i++) {
            if (key[i] != ' ') {
                if (mp[key[i]-'a'] == -1) {
                    mp[key[i]-'a'] = cur;
                    cur++;
                }
            }
            if (cur == 26) break;
        }
        for (int i = 0; i < m.size(); i++) {
            if (m[i] != ' ') {
                m[i] = 'a' + mp[m[i]-'a'];
            }
        }
        return m;
    }
};