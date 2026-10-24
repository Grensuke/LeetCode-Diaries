#define ll long long
class Solution {
public:
    vector<ll> fen;
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        // heheheheee
        long long n = nums1.size(), ans = 0;
        fen.assign(60002, 0);
        for (int i = 0; i < n; i++){
            int req = nums1[i]-nums2[i]+diff;
            ans += get(req+30001);
            add(nums1[i]-nums2[i]+30001);
        }
        return ans;
    }

    void add(int i) {
        int n = fen.size();
        while (i < n) {
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