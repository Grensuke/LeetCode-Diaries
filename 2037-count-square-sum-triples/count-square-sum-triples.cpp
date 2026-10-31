class Solution {
public:
    int countTriples(int n) {
        // Ikitendakara
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int req = i*i+j*j;
                int x = sqrt(req);
                if (x*x == req && x <= n) ans++;
            }
        }
        return ans;
    }
};