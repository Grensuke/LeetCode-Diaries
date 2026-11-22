class Solution {
public:
    bool checkString(string s) {
        // Still. For your hard work, dedication and consistency.. Take a bow
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] == 'b' && s[i+1] == 'a') return 0;
        }
        return 1;
    }
};