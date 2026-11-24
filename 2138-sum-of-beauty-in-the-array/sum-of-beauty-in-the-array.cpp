class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        // I didn't complete the work I needed to do today, Need to start now (>_<)
        int n = nums.size(), ans = 0;
        vector<int> suf(n);
        suf[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
            suf[i] = min(suf[i+1], nums[i]);
        }
        int pre = nums[0];
        for (int i = 1; i < n-1; i++) {
            if (pre < nums[i] && suf[i+1] > nums[i]) ans += 2;
            else if (nums[i] > nums[i-1] && nums[i] < nums[i+1]) ans++;
            pre = max(pre, nums[i]);
        }
        return ans;
    }
};