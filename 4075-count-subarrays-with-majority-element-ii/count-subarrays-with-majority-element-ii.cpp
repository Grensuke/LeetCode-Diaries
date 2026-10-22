#define ll long long
class Solution {
public:
    vector<int> fen;
    int n;
    long long countMajoritySubarrays(vector<int>& nums, int t) {
        // Motto motto tsuyoku!
        n = nums.size();
        ll ans = 0;
        fen.assign(2*n+2, 0);
        vector<int> pre(n+1);
        for (int i = 0; i < n; i++) {
            if (nums[i] == t) pre[i+1] = 1;
            else pre[i+1] = -1;
            pre[i+1] += pre[i];
        }
        add(n+1);
        for (int i = 0; i < n; i++) {
            add(pre[i+1]+n+1);
            ans += get(pre[i+1]+n);
        }
        return ans;
    }

    void add(int i) {
        while(i < 2*n+2) {
            fen[i]++;
            i += i&-i;
        }
    }

    ll get(int i) {
        ll sum = 0;
        while(i) {
            sum += fen[i];
            i -= i&-i;
        }
        return sum;
    }
};