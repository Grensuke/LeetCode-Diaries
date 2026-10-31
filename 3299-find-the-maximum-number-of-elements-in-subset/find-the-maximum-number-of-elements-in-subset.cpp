class Solution {
public:
    int maximumLength(vector<int>& nums) {
        // Shinobi no jidai wa owaru
        long long ans = 1;
        map<int, long long> f;
        for (int &i : nums) f[i]++;
        for (auto &i : f) {
            if (i.first == 1) {
                if (i.second%2 == 0) ans = max(ans,i.second-1);
                else ans = max(i.second,ans);
            }
            if (i.second >= 2 && i.first != 1) {
                long long cur = i.first, cnt = 2;
                //cout << cur << " ";
                cur *= cur;
                while (f[cur] >= 2 && cur <= 1e9) {
                    //cout << cur << " ";
                    cnt += 2;
                    cur *= cur;
                }
                if (f[cur] == 1 && cur <= 1e9) {
                    cnt += 1;
                } else {
                    cnt -= 1;
                }
                ans = max(ans, cnt);
            }
            //cout << endl;
        }
        return ans;
    }
};