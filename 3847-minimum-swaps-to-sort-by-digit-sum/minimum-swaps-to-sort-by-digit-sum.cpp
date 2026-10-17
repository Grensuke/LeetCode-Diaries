class Solution {
public:
    int minSwaps(vector<int>& nums) {
        // Katsu sa
        vector<int> arr = nums;
        int n = nums.size(), ans = 0;
        sort(arr.begin(),arr.end(), [this](int a, int b) {
            if (sod(a) == sod(b)) return a < b;
            return sod(a) < sod(b);
        });

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) mp[nums[i]] = i;
        for (int i = 0; i < n; i++) {
            if (nums[i] != arr[i]) {
                ans++;
                int ind1 = mp[arr[i]], ind2 = mp[nums[i]];
                mp[nums[i]] = ind1;
                mp[arr[i]] = ind2;
                swap(nums[ind1],nums[ind2]);
            }
        }
        return ans;
    }
    int sod(int n) {
        int ans = 0;
        while (n) {
            ans += n%10;
            n /= 10;
        }
        return ans;
    }
};