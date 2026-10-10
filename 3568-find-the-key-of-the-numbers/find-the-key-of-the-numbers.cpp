class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int cur = 1000, ans = 0;
        for (int i = 0; i < 4; i++) {
            int add = min({(num1/cur)%10,(num2/cur)%10,(num3/cur)%10});
            ans = ans*10+add;
            cur /= 10;
        }
        return ans;
    }
};