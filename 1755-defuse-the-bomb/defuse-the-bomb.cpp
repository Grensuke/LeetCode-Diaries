class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        if (k == 0) {
            for (int i = 0; i < n; i++) code[i] = 0;
            return code;
        }
        else if (k > 0) {
            int ind = 1;
            int sum = 0;
            int x = k;
            while(x--) {
                sum += code[ind%n];
                ind++;
            }
            vector<int> ans(n);
            ans[0] = sum;
            for (int i = 1; i < n; i++) {
                sum -= code[i%n];
                sum += code[ind%n];
                ind++;
                ans[i] = sum;
            }
            return ans;
        }
        vector<int> ans(n);
        int sum = 0;
        int ind = n-1;
        k = abs(k);
        while(k--) {
            sum += code[ind%n];
            ind--;
        }
        ind++;
        ans[0] = sum;
        for (int i = 1; i < n; i++) {
            sum += code[(i-1)%n];
            sum -= code[ind%n];
            ind++;
            ans[i] = sum;
        }
        return ans;
    }
};