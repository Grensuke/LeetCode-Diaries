class Solution {
public:
    int compress(vector<char>& w) {
        int n = w.size();
        string s = "";
        int k = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 1;
            int j;
            for (j = i+1; j < n; j++) {
                if (w[j] == w[j-1]) cnt++;
                else break;
            }
            i = j-1;
            if (cnt > 1) {
                w[k] = w[i];
                k++;
                string x = to_string(cnt);
                for (int ind = 0; ind < x.size(); ind++) {
                    w[k] = x[ind];
                    k++;
                }
            } else {
                w[k] = w[i];
                k++;
            }
            
        }
        return k;
    }
};