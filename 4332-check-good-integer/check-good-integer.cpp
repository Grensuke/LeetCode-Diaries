class Solution {
public:
    bool checkGoodInteger(int n) {
        // If not you, no one is worthy. You are the best thing happened in my life.
        int a = 0, b = 0;
        while (n) {
            a += (n%10)*(n%10);
            b += n%10;
            n /= 10;
        }
        return a-b >= 50;
    }
};