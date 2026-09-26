class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        unordered_map<string, string> mp;
        for (auto i: k) mp[i[0]] = i[1];
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                string temp = "";
                int j = i+1;
                for (j = i+1; s[j] != ')'; j++) temp.push_back(s[j]);
                i=j;
                if (mp.find(temp) != mp.end()) ans+=mp[temp];
                else ans.push_back('?');
            } else ans.push_back(s[i]);
        }
        return ans;
    }
};