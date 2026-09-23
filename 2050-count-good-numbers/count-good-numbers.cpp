#define ll long long
class Solution {
public:
    ll m = 1e9+7;
    ll fast(ll a, ll n) {
        ll ans = 1;
        while (n) {
            if (n&1) {
                ans = (ans*a)%m;
            }
            a = (a*a)%m;
            n >>= 1;
        }
        return ans;
    }
    int countGoodNumbers(ll n) {
        ll ans = 1, e = (n+1)/2, o = n/2;
        ans = (ans*fast(5,e))%m;
        ans = (ans*fast(4,o))%m;
        return ans;
    }
};