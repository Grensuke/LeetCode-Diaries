#define ll long long
class Solution {
public:
    vector<ll> fen;
    int countRangeSum(vector<int>& nums, int l, int u) {
        // Daijoubu??
        int n = nums.size(), ans = 0;
        vector<ll> pre(n+1, 0);
        set<ll> s;
        s.insert(0);
        for (int i = 0; i < n; i++) {
            pre[i+1] = nums[i]+pre[i];
            s.insert(pre[i+1]);
        }
        int sz = nums.size();
        fen.assign(sz+2, 0);
        vector<ll> arr(1, -1e15);
        for (auto &i : s) arr.push_back(i);
        int temp = lower_bound(arr.begin(),arr.end(), 0) - arr.begin();
        add(temp);
        cout << sz << endl;
        for (int i = 0; i < n; i++) {
            int f1 = upper_bound(arr.begin(),arr.end(), pre[i+1]-l) - arr.begin();
            int f2 = upper_bound(arr.begin(),arr.end(), pre[i+1]-u-1) - arr.begin();
            ans += get(f1-1)-get(f2-1);
            int rank = lower_bound(arr.begin(),arr.end(), pre[i+1]) - arr.begin();
            add(rank);
        }
        return ans;
    }

    void add(int i) {
        int n = fen.size();
        while(i < n) {
            fen[i] += 1;
            i += i&-i;
        }
    }

    int get(int i) {
        int sum = 0;
        while(i > 0) {
            sum += fen[i];
            i -= i&-i;
        }
        return sum;
    }
};