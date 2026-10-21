class Solution {
public:
    int maxFreqSum(string s) {
        // All is Well! Got my hands on Astra and it's amazing!!!
        unordered_map<char, int> frq;
        for (int i = 0; i < s.size(); i++) frq[s[i]]++;
        int v = 0, c = 0;
        for (auto &i : frq) {
            if (i.first == 'a' || i.first == 'e' || i.first == 'i' || i.first == 'o' || i.first == 'u') {
                v = max(i.second,v);
            } else c = max(i.second,c);
        }
        return v+c;
    }
};