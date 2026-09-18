class Solution {
public:
    int n;
    map<int,vector<char>> mp;
    void solve(int i, string& d, string &temp, vector<string>& ans) {
        if (i == n) {
            ans.push_back(temp);
            return;
        }
        int x = d[i]-'0';
        for (int j = 0; j < mp[x].size(); j++) {
            temp.push_back(mp[x][j]);
            solve(i+1,d,temp,ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string d) {
        mp[2] = {'a','b','c'};
        mp[3] = {'d','e','f'};
        mp[4] = {'g','h','i'};
        mp[5] = {'j','k','l'};
        mp[6] = {'m','n','o'};
        mp[7] = {'p','q','r','s'};
        mp[8] = {'t','u','v'};
        mp[9] = {'w','x','y','z'};
        vector<string> ans;
        n = d.size();
        string temp = "";
        solve(0,d,temp,ans);
        return ans;
    }
};