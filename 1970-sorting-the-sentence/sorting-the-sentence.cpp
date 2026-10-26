class Solution {
public:
    string sortSentence(string s) {
        // I am so much bad
        map<int, string> mp;
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                if (s[i] >= '0' && s[i] <= '9') {
                    mp[s[i]-'0'] = temp;
                    temp = "";
                } else temp.push_back(s[i]);
            }
        }
        string ans = "";
        for (auto &i : mp) {
            ans += i.second;
            ans.push_back(' ');
        }
        ans.pop_back();
        return ans;
    }
};