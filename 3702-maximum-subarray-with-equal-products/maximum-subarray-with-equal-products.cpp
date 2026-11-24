class Solution {
public:
    int maxLength(vector<int>& arr) {
        // I meant we are changing ourselves just to adapt and keep moving forward
        // I was in a deep slumber, gomen
        int n = arr.size(), ans = 1;
        for (int i = 0; i < n ; i++) {
            long long p = arr[i], g = arr[i], l = arr[i];
            int cnt = 1;
            for (int j = i+1; j < n; j++) {
                p *= 1LL*arr[j];
                g = gcd(g, arr[j]);
                l = lcm(l, arr[j]);
                if (p == 1LL*g*l) {
                    cnt++;
                    ans = max(ans, cnt);
                }
                else break;
            }
            cout << endl;
        }
        return ans;
    }
};