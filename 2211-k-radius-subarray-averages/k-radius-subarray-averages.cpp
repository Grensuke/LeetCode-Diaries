class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if (k == 0) return nums;
        long long x = 2*k+1, n = nums.size();
        long long sum = 0;
        vector<int> ans(n,-1);
        for (long long i = 0; i < min(x,n); i++) {
            sum += nums[i];
        }
        if (x <= n) ans[k] = (sum/x);
        for (long long i = x; i < n; i++) {
            sum += nums[i]-nums[i-x];
            ans[k+i-x+1]=(sum/x);
        }
        return ans;
    }
};