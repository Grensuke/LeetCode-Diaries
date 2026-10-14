class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        vector<bool> check(n, false);
        for (int i = 1; i < n; i++) {
            if (nums[i]-1 == nums[i-1]) check[i-1] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < k-1; i++) if (check[i]) cnt++;
        if (cnt == k-1) ans.push_back(nums[k-1]);
        else ans.push_back(-1);
        for (int i = k-1; i < n-1; i++) {
            if (check[i-k+1]) cnt--;
            if (check[i]) cnt++;
            if (cnt == k-1) ans.push_back(nums[i+1]);
            else ans.push_back(-1);
        } 
        return ans;
    }
};