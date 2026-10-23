#define ll long long
class Solution {
public:
    vector<int> fen;
    int reversePairs(vector<int>& nums) {
        // After hours, Finally
        ll n = nums.size(), ans = 0;
        set<ll> s;
        for (int i = 0; i < n; i++) s.insert(nums[i]);
        int sz = s.size();       
        fen.assign(sz+2, 0);
        vector<ll> val(1, -1e10);
        for (auto &i: s) val.push_back(i);
        for (int i = 0; i < n; i++) {
            int cur = upper_bound(val.begin(),val.end(),2LL*nums[i]) - val.begin();
            ans += i-get(cur-1);
            int rank = lower_bound(val.begin(),val.end(),nums[i]) - val.begin();
            //cout << cur << " " << i-get(cur) << " " << rank << endl;
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