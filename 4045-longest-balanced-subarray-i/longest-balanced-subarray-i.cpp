class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        // Sabishii
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            unordered_set<int> e,o;
            for (int j = i; j < n; j++) {
                if(nums[j]%2) e.insert(nums[j]);
                else o.insert(nums[j]);
                if(e.size() == o.size()) ans = max(ans,j-i+1);
            }
        }
        return ans;
    }
};