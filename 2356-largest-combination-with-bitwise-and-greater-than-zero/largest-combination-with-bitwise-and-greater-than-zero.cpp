class Solution {
public:
    int largestCombination(vector<int>& c) {
        vector<int> b(31,0);
        for (int i = 0; i < c.size(); i++) {
            int x = c[i], j = 0;
            while (x) {
                if (x & 1) b[j]++;
                x >>= 1;
                j++;
            }
        }
        int ans = *max_element(b.begin(),b.end());
        return ans;
    }
};