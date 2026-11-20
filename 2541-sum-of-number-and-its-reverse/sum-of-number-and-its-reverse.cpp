class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        // Arigato, demo koko wa watashi ga dasu yo.
        // Where are yesterday's and today's placement prep questions :-?
        for (int i = 0; i <= num; i++) {
            int cur = i, r = rev(i);
            if (cur + r == num) return 1;
        }
        return 0;
    }
    int rev(int n) {
        int ans = 0;
        while (n) {
            ans = ans*10+ n%10;
            n /= 10;
        }
        return ans;
    }
};