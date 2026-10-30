class Solution {
public:
    int countSegments(string s) {
        // Nani ka ushinatte mo mata mitsukeru koto wa dekiru kedo, suteta mono wa nidoto modoranai
        while(s.size() && s[s.size()-1] == ' ') s.pop_back();
        reverse(s.begin(), s.end());
        while(s.size() && s[s.size()-1] == ' ') s.pop_back();
        if (s.size() == 0) return 0;
        int cnt = 0;
        for (int i = 1; i < s.size(); i++) if (s[i] == ' ' && s[i-1] != ' ') cnt++;
        return cnt + 1;
    }
};