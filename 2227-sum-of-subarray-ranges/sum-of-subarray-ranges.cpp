class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        // Resolution! Kaiketsu! 
        long long ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            long long maxi = nums[i], mini = nums[i];
            for (int j = i+1; j < n; j++) {
                maxi = max(maxi, 1LL*nums[j]);
                mini = min(mini, 1LL*nums[j]);
                ans += maxi - mini;
            }
        }
        return ans;
    }
};