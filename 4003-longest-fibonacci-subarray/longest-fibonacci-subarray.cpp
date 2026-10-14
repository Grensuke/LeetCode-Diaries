class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        long long sum = 0;
        int cnt = 2, ans = 2, n = nums.size();
        if (n <= 2) return n;
        for (int i = 2; i < n; i++) {
            if (1LL*nums[i-1]+1LL*nums[i-2] == 1LL*nums[i]) {
                cnt++;
            } else {
                cnt = 2;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};