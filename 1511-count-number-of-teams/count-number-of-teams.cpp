class Solution {
public:
    vector<int> fen;
    int numTeams(vector<int>& r) {
        // Not so easy ahhh!
        fen.assign(1e5+1, 0);
        int n = r.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            add(r[i], 1);
        }
        for (int i = 0; i < n; i++) { 
            add(r[i], -1);
            for (int j = i+1; j < n; j++) { 
                add(r[j], -1);
                if (r[j] < r[i]) {
                    ans += get(r[j]-1);
                }
            }
            for (int j = i+1; j < n; j++) {
                add(r[j],1);
            }
        }
        for (int i = 0; i < n; i++) {
            add(r[i], 1);
        }
        for (int i = n-1; i >= 0; i--) {
            add(r[i], -1);
            for (int j = i-1; j >= 0; j--) {
                add(r[j], -1);
                if (r[j] < r[i]) {
                    ans += get(r[j]-1);
                }
            }
            for (int j = i-1; j >= 0; j--) {
                add(r[j],1);
            }
        }
        return ans;
    }

    void add(int i, int val) {
        while(i <= 1e5) {
            fen[i] += val;
            i += i&-i;
        }
    }

    int get(int i) {
        int ans = 0;
        while(i) {
            ans += fen[i];
            i -= i&-i;
        }
        return ans;
    }
};