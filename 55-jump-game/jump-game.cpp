class Solution {
public:
    bool canJump(vector<int>& nums) {
        // mada da!
        int maxi = -1, n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi,i+nums[i]);
            if (i != n-1 && maxi <= i) return 0;
        }
        return 1;
    }
};