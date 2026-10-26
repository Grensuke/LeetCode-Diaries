class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        // Akiramenai
        int ans = 0;
        for (int i = low; i <= high; i++) {
            string x = to_string(i);
            if (x.size()%2) continue;
            int k = 0;
            for (int j = 0; j < x.size()/2; j++) {
                k += x[j];
                k -= x[x.size()-j-1];
            }
            if (k == 0) ans++;
        }
        return ans;
    }
};