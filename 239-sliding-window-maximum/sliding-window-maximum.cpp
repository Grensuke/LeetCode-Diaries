class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int, greater<int>> f;
        for (int i = 0; i < k; i++)
            f[nums[i]]++;
        vector<int> ans = {f.begin()->first};
        int j = 0;
        for (int i = k; i < n; i++) {
            f[nums[j]]--;
            if (f[nums[j]] == 0)
                f.erase(nums[j]);
            f[nums[i]]++;
            j++;
            ans.push_back(f.begin()->first);
        }
        return ans;
    }
};