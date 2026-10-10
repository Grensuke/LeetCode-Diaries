class Solution {
public:
    int numberOfChild(int n, int k) {
        int cur = 0, inc = 1;
        while (k--) {
            if (cur == 0) inc = 1;
            else if (cur == n-1) inc = -1;
            cur += inc;
        }
        return cur;
    }
};