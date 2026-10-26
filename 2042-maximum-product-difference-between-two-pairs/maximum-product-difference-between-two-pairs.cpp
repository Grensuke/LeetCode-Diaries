class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        // So much but still
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n-1]*nums[n-2]-nums[0]*nums[1];
    }
};