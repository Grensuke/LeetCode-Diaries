class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        // Nisennen
        int ans = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (nums[j]-nums[i] == diff) {
                    int req = diff+nums[j];
                    if (binary_search(nums.begin()+j+1,nums.end(),req)) ans++;
                }
            }
        }
        return ans;
    }
};