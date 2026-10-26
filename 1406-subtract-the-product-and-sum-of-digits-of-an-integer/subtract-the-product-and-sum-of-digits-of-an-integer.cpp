class Solution {
public:
    int subtractProductAndSum(int n) {
        // I don't want to give up
        int sum = 0, mul = 1;
        while(n) {
            sum += n%10;
            mul *= n%10;
            n /= 10;
        }
        return mul-sum;
    }
};