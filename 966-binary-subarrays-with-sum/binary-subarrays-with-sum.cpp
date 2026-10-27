class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // Ore wa shinobi da
        int ans = 0, n = nums.size();
        vector<int> pre(n+1, 0);
        unordered_map<int, int> f;
        f[0]++;
        for (int i = 0; i < nums.size(); i++) {
            pre[i+1] += nums[i]+pre[i];
            int req = pre[i+1]-goal;
            ans += f[req];
            f[pre[i+1]]++;
        }
        return ans;
    }
};