class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // Today My first ALL KILL!!! YAYYYY!!!
        map<int, string> sas;
        for (int i = 0; i < names.size(); i++) sas[heights[i]] = names[i];
        sort(heights.begin(),heights.end(), greater<int>());
        vector<string> ans;
        for (int i = 0; i < names.size(); i++) {
            ans.push_back(sas[heights[i]]);
        }
        return ans;
    }
};