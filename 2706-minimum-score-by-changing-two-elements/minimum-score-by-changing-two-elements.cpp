class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        // Due to depression, took some time to submit. please dont change the submissions -_-
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int f = nums[2], l = nums[n-3];
        return min({nums[n-1]-f, l-nums[0], nums[n-2]-nums[1]});
    }
};