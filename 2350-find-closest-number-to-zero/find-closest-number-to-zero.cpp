class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        // Ryoyiki Tenkai Shingan Soai
        int ans = nums[0], diff = abs(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (abs(nums[i]) < diff) {
                diff = abs(nums[i]);
                ans = nums[i];
            } else if (abs(nums[i]) == diff) ans = max(ans,nums[i]);
        }
        return ans;
    }
};