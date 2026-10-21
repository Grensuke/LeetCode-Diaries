#define ll long long
class Solution {
public:
    vector<ll> fen;
    long long countRatioSubarrays(vector<int>& nums, int a, int b) {
        // Susanooooooo!!!!
        ll n = nums.size(), ans = 0;
        vector<long long> pre(n+1, 0);
        map<long long, int> f;
        f[0]++;
        for (int i = 0; i < n; i++) {
            if (nums[i]%2) nums[i] = -a;
            else nums[i] = b;
            pre[i+1] = 1LL*pre[i] + 1LL*nums[i];
            f[pre[i+1]]++;
        }
        unordered_map<long long, int> ind;
        ll cnt = 1;
        for (auto &i: f) {
            ind[i.first] = cnt;
            cnt++;
        } 
        vector<ll> arr;
        for (int i = 0; i < n+1; i++) arr.push_back(ind[pre[i]]);
        fen.assign(cnt, 0);
        add(arr[0], cnt);
        int c = 1;
        for (int i = 1; i < n+1; i++) {
            int x = c-get(arr[i]-1);
            ans += x;
            add(arr[i], cnt);
            c++;
        }
        return ans;
    }

    void add(int i, int n) {
        while(i < n) {
            fen[i]++;
            i += i &-i;
        }
    }

    int get(int i) {
        int ans = 0;
        while(i) {
            ans += fen[i];
            i -= i&-i;
        }
        return ans;
    }
};