#define ll long long
class Solution {
public:
    long long maxValue(vector<int>& nums) {
        ll sum = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i%2 == 0) sum += nums[i];
            else sum -= nums[i];
        }
        ll ans = sum, csum = sum;
        //cout << sum << endl;
        for (int i = 0; i < n; i+=2) {
            if (i+1 != n && nums[i] <= nums[i+1] || (i+1 != n && csum+2LL*(nums[i+1]-nums[i]) > sum)) {
                csum += 2LL*(nums[i+1]-nums[i]);
                //cout << csum << endl;
            } else {
                csum = sum;
            }
            ans = max(ans,csum);
        }
        csum = sum;
        for (int i = 1; i < n; i+= 2) {
            if (i+1 != n && nums[i] >= nums[i+1] || (i+1 != n && csum+2LL*(nums[i]-nums[i+1]) > sum)) {
                csum += 2LL*(nums[i]-nums[i+1]);
            } else csum = sum;
            ans = max(ans,csum);
        }
        return ans;
    }
};