class Solution {
public:
    string compressedString(string w) {
        int n = w.size();
        string s = "";
        for (int i = 0; i < n; i++) {
            int cnt = 1;
            int j;
            for (j = i+1; j < min(n,i+9); j++) {
                if (w[j] == w[j-1]) cnt++;
                else break;
            }
            i = j-1;
            s.push_back('0'+cnt);
            s.push_back(w[i]);
        }
        return s;
    }
};