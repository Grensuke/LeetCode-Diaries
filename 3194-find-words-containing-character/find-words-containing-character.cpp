class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        // Usually 0-5 ms it is normal to fluctuate even if your code is optimized, it is due to LC server
        vector<int> ans;
        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            if (count(s.begin(),s.end(),x)) ans.push_back(i);
        }
        return ans;
    }
};