class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int k = (sum+8)/9;
        string ans = "";
        int t = num;
        if (k>num) return "";
        while(t--) {
            int mini;
            if (sum > 9) mini = 9;
            else mini = sum;
            ans.push_back('0'+mini);
            sum -= mini;
        }
        return ans;
    }
};